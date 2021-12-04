
# UniSleepライブラリ

Arduinoおよびその互換機等でCPUを止めてsleepさせるためのライブラリ．
既存のライブラリがCPUアーキテクチャ毎にAPIが違いすぎる上，各アーキテクチャも
使い方などの情報がまとまっているところが見当たらないなど不明な点が多すぎたため，
極力同じようなI/Fでsleep機能を使えるようにするためのライブラリとなっています．

現状サポートしているCPUアーキテクチャは以下の4種類です．(Arduino DueはSAMアーキなのでサポートしていません)
- AVR
- SAMD
- ESP32
- ESP8266

また，大部分のCPUアーキの機種では，ADCによってsleepから起こす機能もありますが，使い方がわからないため実装していません．
SAMDアーキテクチャは，既存のライブラリ(ArduinoLowPower.h)にADC機能があるためそれを取り込んでいますが，
ドキュメントやソースから類推して実装しただけであるため，動くかどうかも未知数です．

また，本ライブラリは網羅的な試験もできていないので，動作の保証はできない状況です．
持っている装置も少なく，時間も限られているため趣味の範囲では難しいです．

SAM(Arduino Due)もサポートしたいのですが，情報が少なすぎて困ってます．

## CPUアーキテクチャによる違いの概要
本ライブラリ作成のきっかけは，CPUアーキテクチャ毎にsleepのAPIが違いすぎて，
マルチアーキテクチャのプログラムを作ろうとすると，#ifdefの山になってしまう
ことだったため，なるべく統一したかったのですが，下の表にあるように，
ESP8266が外部割り込み関係の機能がないこと，ESP32の外部の割り込み関係の
APIが完全に隠蔽されていてSAMDやAVRのAPIと違いが大きいことから，
#if文がある程度残ってしまいます．

あと，SAMDアーキテクチャで動作確認に利用したのが，MKR WiFi1010ですが，
sleep時のシリアルの動きが特殊なため，Sleep前後のSerialへの出力等で
#ifなしにできない状態です．

|CPUアーキ| 内蔵タイマ | 外部割り込み(WDT含む)等 | リセット |
|---|---|---|---|
|AVR      | ×         |    ○                  | ○ |
|SAMD     | ○         |     ○                  | ○ |
|ESP32    | ○         |     ●                  | ○ |
|ESP8266  | △        |     ×                   | ○   |

添付のexampleプログラムを試す時などは，そこに注意してソースを
読んでいただければ，マルチアーキテクチャのプログラムを作る際の
注意点がわかっていただけるかと思います．


# 1. AVR(Uno, Megaなど)のAPI

## 1.1. スリープモードの選択
- ``int UniSleep::SetSleepMode(int mode)``

### (1) 引数(mode)
スリープの種類を以下の定数のうちのいずれかを用いて指定．
- ``MODE_IDLE``
- ``MODE_ADC``
- ``MODE_PWR_SAVE``
- ``MODE_STANDBY``
- ``MODE_PWR_DOWN``

各定数とAVRシリーズのCPUにおけるsleepのモードとの関係は以下の表の通り．

|値|``avr/sleep.h``との対応|動作|
|---|---|---|
|``MODE_IDLE``     |``SLEEP_MODE_IDLE``|システムクロックは停止。周辺回路へのクロックは供給。|
|``MODE_ADC``      |``SLEEP_MODE_ADC``|ADC変換ノイズ低減。|
|``MODE_PWR_SAVE`` |``SLEEP_MODE_PWR_SAVE``|タイマー用の外部発振器は動作。|
|``MODE_STANDBY``  |``SLEEP_MODE_STANDBY``|外部発振器が動作。|
|``MODE_PWR_DOWN`` |``SLEEP_MODE_PWR_DOWN``|外部発振器停止。|

**参考文献**
- https://omoroya.com/arduino-extra-edition-13/
- [データシート](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf)の9章

各動作モードで[動作/止まる]クロックは以下の表の通り．
|``avr/sleep.h``のモード|clkCPU|clkFLASH|clkI/O|clkADC|clkASY|
|---|---|---|---|---|---|
|``SLEEP_MODE_IDLE``|||○|○|○|
|``SLEEP_MODE_ADC``||||○|○|
|``SLEEP_MODE_PWR_SAVE``|||||○|
|``SLEEP_MODE_STANDBY``||||||
|``SLEEP_MODE_PWR_DOWN``||||||


各スリープモードが目覚めるきっかけは以下の表の通り．
|``avr/sleep.h``のモード|I/O|ADC変化|ウオッチドックタイマ|外部割込|RESETピン|
|---|---|---|---|---|---|
|``SLEEP_MODE_IDLE``|○|○|○|○|○|
|``SLEEP_MODE_ADC``||○|○|○|○|
|``SLEEP_MODE_PWR_SAVE``|||○|○|○|
|``SLEEP_MODE_STANDBY``|||○|○|○|
|``SLEEP_MODE_PWR_DOWN``|||○|○|○|

### (2) 返り値

|値|意味|
|---|---|
|``0``|設定成功|
|``_UNSUPPORTED_MODE_``|引数の値が無効なもの|

## 1.2. スリープ
- ``bool Sleep(void)``

### 返り値
|値|意味|
|---|---|
|``true``|sleep成功|
|``false``|sleep失敗|

## 1.3. 割り込みの設定
- ``bool UniSleep::SetInterrupt(uint32_t pin, void (*userFunc)(void), uint32_t mode)``

### (1) 引数
**pin**

ピンの電圧を監視することで割り込みが発生するピンの番号を指定する．

**userFunc**

割り込み発生時に実行する関数．

**mode**

以下の表の値のうちの一つを指定する．
|値|意味|
|---|---|
|LOW    |pinで指定されたピンの電圧がLOWレベルの場合|
|CHANGE |pinで指定されたピンの電圧が変化した場合|
|RISING |pinで指定されたピンの電圧がLOWからHIGHに変化した場合|
|FALLING|pinで指定されたピンの電圧がHIGHからLOWに変化した場合|

### (2) 返り値
|値|意味|
|---|---|
|``true``|設定成功|
|``false``|modeで指定した値が無効な場合，もしくは，指定したpinが割り込みに対応していない場合|

## 1.4. 割り込み解除
- ``bool UniSleep::UnSetInterrupt(uint32_t pin)``
### (1) 引数
``bool UniSleep::SetInterrupt(uint32_t pin, void (*userFunc)``で指定したピン番号を指定する．ただし，事前に指定したピン番号と一致しているか田舎までは確認しないことに注意が必要．

### (2) 返り値
|値|意味|
|---|---|
|``true``|設定成功|
|``false``|指定したpinが割り込みに対応していない場合|


# 2. SAMD (MKRシリーズ, Zero)のAPI
SAMDアーキのCPUを搭載したArduinoでは，ArduinoLowPower.hのラッパになっている．

## 2.1 スリープモードの設定
最初のAPIは割り込みやリセット等が発生するまで，sleepし続ける．2番目のAPIでは，スリープ時間の最大値を指定する．2番目のAPIは第2引数で指定した時間を経過するか割り込みが発生した場合にwakeupする．
- ``int UniSleep::SetSleepMode(int mode)``
- ``int UniSleep::SetSleepMode(int mode, uint32_t duration)``

### (1) 引数
**mode**
|機種|スリープモード|ArduinoLowPower.hとの対応関係|
|---|---|---|
|全部|MODE_IDLE  |     idle()|
||MODE_STANDBY   | sleep(void)|
||MODE_PWR_DOWN  | deepSleep(void)|
|TianとPrimo|MODE_PWR_SAVE|companionSleep()|

**duration**

スリープする時間をミリ秒単位で指定する．

### (2) 返り値
|値|意味|
|---|---|
|``0``|設定成功|
|``_UNSUPPORTED_MODE_``|``mode``が無効な値の場合|



## 2.2. スリープ
- ``bool Sleep(void)``

### 返り値
|値|意味|
|---|---|
|``true``|sleep成功|
|``false``|sleep失敗|

## 2.3. 割り込み設定-1
- ``bool UniSleep::SetInterrupt(uint32_t pin, void (*userFunc)(void), irq_mode mode)``

### (1) 引数
**pin**

ピンの電圧を監視することで割り込みが発生するピンの番号を指定する．

**userFunc**

割り込み発生時に実行する関数．

**mode**

|値|意味|
|---|---|
|LOW    |pinで指定されたピンの電圧がLOWレベルの場合|
|HIGH   |pinで指定されたピンの電圧がHIGHレベルの場合|
|CHANGE |pinで指定されたピンの電圧が変化した場合|
|RISING |pinで指定されたピンの電圧がLOWからHIGHに変化した場合|
|FALLING|pinで指定されたピンの電圧がHIGHからLOWに変化した場合|

### (2) 返り値

|値|意味|
|---|---|
|``true``|設定成功|
|``false``|設定失敗|

## 2.4. 割り込み設定-2
ADCであるピンの電圧変化を監視して，その結果でwakeupさせる機能を有効にするAPI．
- ``bool UniSleep::SetInterrupt(uint32_t pin, voidFuncPtr callback, adc_interrupt mode, uint16_t lo, uint16_t hi)``
 
### (1) 引数
**pin**

ピンの電圧を監視することで割り込みが発生するピンの番号を指定する．

**callback**

割り込み発生時に実行する関数．

**hi, lo**

監視するピンの電圧の上限値と下限値

**mode**

|値|意味|
|---|---|
|ADC_INT_BETWEEN|下限値と上限値の間に入った場合|
|ADC_INT_OUTSIDE|下限値以下，もしくは，上限値以上になった場合|
|ADC_INT_ABOVE_MIN|下限値以上の場合|
|ADC_INT_BELOW_MAX|上限値以下の場合|

### (2) 返り値
|値|意味|
|---|---|
|``true``|設定成功|
|``false``|設定失敗|


## 2.5. 割り込み設定解除-1
ADCによるwakeup機能を無効化するAPI．
- ``bool UniSleep::UnSetInterrupt(void)``

### 返り値
|値|意味|
|---|---|
|``true``|設定成功|
|``false``|設定失敗|

## 2.6. 割り込み設定解除-2
2.3節の「割り込み設定-1」で設定した機能を無効化するAPI．
- ``bool UniSleep::UnSetInterrupt(uint32_t pin)``

### (1) 引数
2.3節の「割り込み設定-1」で指定したpin番号を指定する．

### (2) 返り値
|値|意味|
|---|---|
|``true``|設定成功|
|``false``|設定失敗|

# 3. SAM (Due)

未サポート


# 4. ESP8266のAPI

ESP8266では，リセットpinをLOWレベルにしてリセットするか，sleep時間を指定する以外のwakeup方法はないため，sleep中の無線回路の状態設定とスリープ時間の設定しか機能がない．

ただし，sleep時間を指定した場合でも，ピン番号16番がタイマでLOWレベルになるだけであるため，配線でpin番号16とリセットピンを配線しておく必要がある．

## 4.1. スリープモードの設定-1
引数で指定した時間(マイクロ秒単位)の期間スリープする設定を行うAPI．
- ``int UniSleep::SetSleepMode(uint64_t duration)``

### (1) 引数
|値|意味|
|---|---|
|``0``|時間でのwakeupはしない|
|``0``以外|引数の時間sleepする|

### (2) 返り値
|値|意味|
|---|---|
|``0``|設定成功|
|``_UNSUPPORTED_MODE_``|設定失敗|


## 4.2. スリープモードの設定-2
スリープする時間(第2引数)と，スリープ中の無線の状態の設定(第1引数)を行うAPI．
- ``int UniSleep::SetSleepMode(uint8_t mode, uint64_t duration)``

**mode**
|値|意味|
|---|---|
|WAKE_RF_DEFAULT||
|WAKE_RFCAL||
|WAKE_NO_RFCAL||
|WAKE_RF_DISABLED||

**duration**
|値|意味|
|---|---|
|``0``|時間でのwakeupはしない|
|``0``以外|引数の時間sleepする|

### (2) 返り値
|値|意味|
|---|---|
|``0``|設定成功|
|``_UNSUPPORTED_MODE_``|設定失敗|

## 4.3. スリープ
- ``bool Sleep(void)``

### 返り値
|値|意味|
|---|---|
|``true``|sleep成功|
|``false``|sleep失敗|


# 5. ESP32のAPI


## 5.1. スリープモードの設定-1

- ``int UniSleep::SetSleepMode(int mode)``

### (1) 引数

|値|意味|
|---|---|
|MODE_STANDBY  | light sleep |
|MODE_PWR_DOWN | deep sleep |

### (2) 返り値

|値|意味|
|---|---|
|``0``|設定成功|
|``_UNSUPPORTED_MODE_``|設定失敗|


## 5.2. スリープモードの設定-2
- ``int UniSleep::SetSleepMode(int mode, uint32_t duration)``

### (1) 引数

**mode**
|値|意味|
|---|---|
|MODE_STANDBY  | light sleep |
|MODE_PWR_DOWN | deep sleep |

**duration**
|値|意味|
|---|---|
|``0``|時間でのwakeupはしない|
|``0``以外|引数の時間sleepする|

### (2) 返り値
|値|意味|
|---|---|
|``0``|設定成功|
|``_UNSUPPORTED_MODE_``|設定失敗|

## 5.3. スリープモードの設定-3
- ``int UniSleep::SetSleepMode(int mode, uint32_t duration, int num, bool ulp, bool pad, gpio_num_t gpio, bool wifi)``

**mode**
|値|意味|
|---|---|
|MODE_STANDBY  | light sleep |
|MODE_PWR_DOWN | deep sleep |

**duration**
|値|意味|
|---|---|
|``0``|時間でのwakeupはしない|
|``0``以外|引数の時間sleepする|

**num**
|値|意味|
|---|---|
|``0``|UART0でwakeup|
|``1``|UART1でwakeup|
|負の値|UARTでのwakeupは使わない|

**ulp**
|値|意味|
|---|---|
|``true``|ulp wakeup機能を使う|
|``false``|ulp wakeup機能を使わない|

**pad**
|値|意味|
|---|---|
|``true``|touch sensor wakeup機能を使う|
|``false``|touch sensor wakeup機能を使わない|

**gpio**
|値|意味|
|---|---|
|``true``|gpio wakeup機能を使う|
|``false``|gpio wakeup機能を使わない|

**wifi**
|値|意味|
|---|---|
|``true``|wifi wakeup機能を使う|
|``false``|wifi wakeup機能を使わない|

## 5.4. スリープ
- ``bool UniSleep::Sleep(void)``

### 返り値
|値|意味|
|---|---|
|``true``|sleep成功|
|``false``|sleep失敗|


## 5.5. 割り込みの設定-1
ext0 wakeupを設定するAPI．
- ``bool UniSleep::SetInterrupt(gpio_num_t pin, int level)``


### (1) 引数
**pin**

ピンの電圧を監視することで割り込みが発生するピンの番号を指定する．

**level**

|値|意味|
|---|---|
|LOW    |pinで指定されたピンの電圧がLOWレベルの場合|
|HIGH   |pinで指定されたピンの電圧がHIGHレベルの場合|


### (2) 返り値
|値|意味|
|---|---|
|``true``|設定成功|
|``false``|設定失敗|


## 5.6. 割り込みの設定-2
ext1 wakeupを設定するAPI．
- ``bool UniSleep::SetInterrupt(uint64_t mask, esp_sleep_ext1_wakeup_mode_t level)``

### (1) 引数

**mask**

ピンの電圧を監視することでsleepを抜ける機能を使う際の，監視対象ピンの番号を2進数のマスク形式で指定する．
現状使えるピン番号は「0,2,4,12-15,25-27,32-39」．

**level**

|値|意味|
|---|---|
|ESP_EXT1_WAKEUP_ALL_LOW    |maskで指定された全てのピンの電圧がLOWレベルの場合|
|ESP_EXT1_WAKEUP_ANY_HIGH   |maskで指定されたピンのいずれかの電圧がHIGHレベルの場合|


### (2) 返り値
|値|意味|
|---|---|
|``true``|設定成功|
|``false``|設定失敗|

## 5.7. 割り込みの解除
- ``bool UniSleep::UnSetInterrupt(esp_sleep_source_t source)``

## (1) 引数
|値|意味|
|---|---|
|ESP_SLEEP_WAKEUP_UNDEFINED||
|ESP_SLEEP_WAKEUP_ALL||
|ESP_SLEEP_WAKEUP_EXT0||
|ESP_SLEEP_WAKEUP_EXT1||
|ESP_SLEEP_WAKEUP_TIMER||
|ESP_SLEEP_WAKEUP_TOUCHPAD||
|ESP_SLEEP_WAKEUP_ULP||
|ESP_SLEEP_WAKEUP_GPIO||
|ESP_SLEEP_WAKEUP_UART||
|ESP_SLEEP_WAKEUP_WIFI||
|ESP_SLEEP_WAKEUP_COCPU||
|ESP_SLEEP_WAKEUP_COCPU_TRAP_TRIG||
|ESP_SLEEP_WAKEUP_BT||

### (2) 返り値
|値|意味|
|---|---|
|``true``|設定成功|
|``false``|設定失敗|


## 5.8. wakeupの原因になった割り込みの種類を知るためのAPI
- ``esp_sleep_wakeup_cause_t UniSleep::WakeupReason(void)``


### 返り値

|値|意味|
|---|---|
|ESP_SLEEP_WAKEUP_UNDEFINED||
|ESP_SLEEP_WAKEUP_ALL||
|ESP_SLEEP_WAKEUP_EXT0||
|ESP_SLEEP_WAKEUP_EXT1||
|ESP_SLEEP_WAKEUP_TIMER||
|ESP_SLEEP_WAKEUP_TOUCHPAD||
|ESP_SLEEP_WAKEUP_ULP||
|ESP_SLEEP_WAKEUP_GPIO||
|ESP_SLEEP_WAKEUP_UART||
|ESP_SLEEP_WAKEUP_WIFI||
|ESP_SLEEP_WAKEUP_COCPU||
|ESP_SLEEP_WAKEUP_COCPU_TRAP_TRIG||
|ESP_SLEEP_WAKEUP_BT||



