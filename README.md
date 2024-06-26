# detectArduinoHardware
Arduinoの機種を区別するライブラリですが，ヘッダファイルだけでできており，バイナリサイズはまったく増えません．

動作検証はあまいです．なにせ，手元に現物がない装置がほとんどで，コンパイルエラーの有無ぐらいしか
確認できません．ただし，ヘッダファイルだけなので，機種が識別できているかどうかは確認できています．

後で説明しますが，このヘッダファイルを利用した便利機能を実装したライブラリをextensionディレクトリに
収容しています．

## インストール
そのライブラリをArduino IDEが利用するlibrariesディレクトリに本ディレクトリを置きます．

## ライセンス
なんでもよかったんだけど，とりあえず
BSDライセンスにしときます．詳細はLICENCEファイルを見てください．

## 使い方

コンパイル時の引数などを見て，コンパイル対象の機種を判断し，
各種の定数を定義してくれるので，自分の書くプログラムは，機種による切り替えを次のようなif文で行う．

```
#if HARDWARE_TYPE == ARDUINO_UNO
   Arduino Uno用のプログラム
#endif
```

他にも，代表的な機種では，下のような定数を自動で定義するので活用してください．
使われる可能性が高いのは，I2CやSPIのポート番号とAREFの電圧でしょうか．表中の
定数のうち，わかりにくいものは下に説明を追加しておきます．

|定数|内容|値の例|
|:---|:---|:---|
|HARDWARE_TYPE|機種|ARDUINO_UNO(実際は整数)|
|HARDWARE_NAME|機種名(文字列)|"ARDUINO UNO"|
|HARDWARE_VDD|動作電圧(の10倍の値)|50|
|HARDWARE_AREF|アナログ端子の基準電圧(の10倍の値)|50|
|CPU_ARCH|CPUアーキテクチャ|AVR_ARCH|
|CPU_TYPE|CPUの種類|TYPE_ATmega32U4|
|MAX_SERIAL|ハードウェアシリアルの数|1 (Megaの場合は4)|
|MAX_DIGITAL|デジタルポートの数|20|
|MAX_ANALOG|アナログポートの数|6|
|PMW_PORTS|PMW出力可能なポート番号|{3,5,6,9,10,11}|
|I2C_SDA|I2CのSDAと共用しているポート|A4|
|I2C_SCL|I2CのSCLと共用しているポート|A5|
|SPI_MOSI|ハードSPIのMOSIポート|11|
|SPI_MISO|ハードSPIのMISOポート|12|
|SPI_SCK|ハードSPIのSCKポート|13|
|SPI_SS|デフォルトのSPIチップセレクトに用いるポート番号|10|
|ONBOARD_LED|オンボードLEDがつながっているポート番号|13|
|SERIAL_RESET|シリアルポートをオープンした場合にリセットされるか否か|bool値(true,false)|

Arduino GigaはオンボードLEDが3個(3色)存在し，CAN用のピンが存在するため，以下の定義を追加しています．
- ONBOARD_FULL_LED (オンボードLEDがフルカラーの場合のみ定義されている)
- LED_RED, LED_GREEN, LED_BLUE(値はピン番号)
- HAVE_CAN (CANインターフェースが存在する場合のみ定義されている)
- CAN_RX, CAN_TX (各々のピン番号を設定)


### HARDWARE_AREF
一部の機種は，アナログ端子のAREFの電圧とVDD値が一致していないので，
アナログ端子の入力を何らかの値に変換する際の基準値として用いる．

### MAX_SERIAL
ハードウェアシリアルの数が定義されているので，MegaやDeuのようなハードを使っているハードと
その他のハードでシリアルポートを使い分けるような場合に，ifdefなどで切り分ける．

### MAX_DIGITAL と MAX_ANALOG
Uno系のボードとMega系のボードでプログラムを共有する場合，ピン数の関係で
接続する端子を変えたい場合，機種を列挙するのは面倒なので，ピン数で
判断する際に利用する．

MAX_ANALOGはIDE上で「A0, A1」などの定数でピン番号が指定されるものの数を示しており，
現在のArduinoの開発環境では，pinmapに記載されているアナログ端子の数と
「Aなんとか」で指定できるアナログ端子の数が一致していないため，注意が必要．

### SERIAL_RESET
DEBUG目的でSerialポートにログを出力する場合，シリアルポートを開くまで
動作を止めたいことは多い．Arduinoの純正ボードの多くは閉じている
シリアルポートを開くと，本体にリセットがかかり，最初からプログラムを
実行し直すことから，特別な処理は不要であるが，一部の純正ボードや
ESP8266, ESP32を搭載したボードはこのようなリセット機能はないため，
下のような処理を``setup()``の中に入れることが多い．

```
while (!Serial) {       // シリアルポートが開くのを待つ
  ;
}
```
上のようなコードは機種で要/不要が異なるため，``SERIAL_RESET``を
用いてプリプロセッサの``#if``等で上の処理を入れる/入れないを切り替える
場合に用いる．

### より高度な使い方

extensionディレクトリには本ライブラリを利用するこのヘッダファイルを便利に使う機能や，
本ヘッダの機能でCPUアーキを判別して，実装を切り替えるソフトウェアリセット(reboot)機能の
ライブラリを収納しています．extension配下のディレクトリをArduino IDEのライブラリディレクトリに
コピーしてください．

この拡張ライブラリの詳細はextensionディレクトリの中のドキュメントを参照してください．

## 対応しているボード
Arduino IDEのボードマネージャから確認した手元の環境．

|MCUアーキやチップ種別|開発者|バージョン|
|:---|:---|:---|
|Arduino AVR Boards Built-In|Arduino|1.8.16|
|Arduino SAM Boards (32-bits ARM Cortex-M3)|Arduino|1.6.12|
|Arduino SAMD Boards (32-bits ARM Cortex-M0+)|Arduino|1.8.11|
|esp32|Espressif Systems|2.0.0|
|esp8266|ESP8266 Community|3.0.2|
|ルネサスRA4|Arduino公式|1.1.0|
|STマイクロSTM32H747xI|Arduino公式|4.1.1|
|Raspberry Pi RP2040|Arduino公式|4.1.1|
|Raspberry Pi RP2040|下記を参照|3.8.0|

上の表のRP2040のArduino公式でないものは，以下のURLで開発が進められてるもので，Arduinoの機種，Raspberry Pi Pico以外の
RP2040を搭載したマイコンをサポートしており，ボランティア開発者以外に，
RP2040搭載マイコンを販売するベンダも協力して，統合版のようなものになっている．

- https://github.com/earlephilhower/arduino-pico

上の環境でIDEがサポートしている機種の大部分は機種判定はできます．
表の「対応状況」の「○,△,▲,×」の意味は以下の通り．

|記号|意味|
|:---|:---|
|○|すべての項目の値が利用可能|
|△|一部の項目の値が利用不可(undefとなる)|
|▲|機種，機種名，CPUアーキ，CPUの種類は判別可能|
|×|複数の機種のいずれかであるかはわかる程度|

### AVR系列
|HARDWARE_TYPEの値|機種|対応状況|備考|
|:---|:---|:---:|:---|
|ARDUINO_YUN|Arduino Yun|○||
|ARDUINO_UNO|Arduino Uno|○||
|ARDUINO_DUEMILANOVE_328P|Arduino Duemilanove (ATmega328P搭載)|○||
|ARDUINO_DUEMILANOVE_168|Arduino Duemilanove (ATmega168搭載)|○||
|ARDUINO_NANO_328P|Arduino Nano (ATmega328P搭載)|○||
|ARDUINO_NANO_168|Arduino Nano (ATmega168搭載)|○||
|ARDUINO_MEGA2560|Arduino Mega2560|○||
|ARDUINO_MEGA|Arduino Mega|○||
|ARDUINO_MEGA_ADK|Arduino ADK|○||
|ARDUINO_LEONARDO|Arduino Leonardo|○||
|ARDUINO_LEONARDO_ETH|Arduino Leonardo Ethernet|○||
|ARDUINO_MICRO|Arduino Micro|○||
|ARDUINO_ESPLORA|Arduino Esplora|△|I2Cのピンが不明|
|ARDUINO_MINI_328P|Arduino Mini  (ATmega328P搭載)|○||
|ARDUINO_MINI_168|Arduino Mini (ATmega168搭載)|○||
|ARDUINO_ETHERNET|Arduino Ethernet|○||
|ARDUINO_FIO|Arduino Fio|○||
|ARDUINO_BT_328P|Arduino BT (ATmega328P)|○||
|ARDUINO_BT_168|Arduino BT (ATmega168)|○||
|ARDUINO_LILYPAD_USB|LilyPad Arduino USB|▲||
|ARDUINO_LILYPAD_328P|LilyPad Arduino (ATmega328P)|▲||
|ARDUINO_LILYPAD_168|LilyPad Arduino (ATmega168)|▲||
|ARDUINO_PRO_328P_5V|Arduino Pro or Pro Mini (ATmega328P 5V)|○|ピン等はPro miniに合わせてます|
|ARDUINO_PRO_328P_3_3V|Arduino Pro or Pro Mini (ATmega328P 3.3V)|○|同上|
|ARDUINO_PRO_168_5V|Arduino Pro or Pro Mini (ATmega168 5V)|○|同上|
|ARDUINO_PRO_168_3_3V|Arduino Pro or Pro Mini (ATmega168 3.3V)|○|同上|
|ARDUINO_NG_168|Arduino NG (ATmega168)|▲||
|ARDUINO_NG_8|Arduino NG (ATmega8)|▲||
|ARDUINO_ROBOT_CONTROL|Arduino Robot Control|▲||
|ARDUINO_ROBOT_MOTOR|Arduino Robot Motor|▲||
|ARDUINO_GEMMA|Arduino Gemma|○||
|ARDUINO_CIRCUIT_PLAY|Arduino Circuit play|▲||
|ARDUINO_YUN_MINI|Arduino Yun Mini|▲||
|ARDUINO_INDUSTRIAL101|Arduino Industrial101|▲||
|ARDUINO_LININO_ONE|Arduino Lilino One|▲||
|ARDUINO_UNO_WIFI_DEV_ED|Arduino Uno Wifi Developer Edition|▲||

### SAM系統
|定義される定数|機種|対応状況|備考|
|:---|:---|:---:|:---|
|ARDUINO_DUE|Arduino Due|○||

### SAMD系統
|定義される定数|機種|対応状況|備考|
|:---|:---|:---:|:---|
|ARDUINO_ZERO|Arduino Zero|▲||
|ARDUINO_MKR1000|Arduino/Genuino MKR1000|▲||
|ARDUINO_MKRZERO|Arduino MKRZero|▲||
|ARDUINO_MKRWIFI1010|Arduino MKR WiFi 1010|▲||
|ARDUINO_NANO_33_IOT|Arduino NANO 33 IoT|▲||
|ARDUINO_MKRFOX1200|Arduino MKRFox1200|▲||
|ARDUINO_MKRGSM1400|Arduino MKR GSM 1400|▲||
|ARDUINO_MKRWAN1300|Arduino MKR WAN 1300|▲||
|ARDUINO_MKRWAN1310|Arduino MKR WAN 1310|▲||
|ARDUINO_MKRNB1500|Arduino MKR NB 1500|▲||
|ARDUINO_MKRVIDOR4000|Arduino MKR Vidor 4000|▲||
|ARDUINO_CIRCUITPLAYGROUND_EXPRESS|Adafruit Circuit Playground M0|▲||
|ARDUINO_TIAN|Arduino Tian|▲||
|ARDUINO_M0|M0 pro / M0|○||

### ルネサス RA4 (Uno R4系列)
|定義される定数|機種|対応状況|備考|
|:---|:---|:---:|:---|
|ARDUINO_UNO_R4_MINIMA|Arduino Uno R4 Minima|▲||
|ARDUINO_UNO_R4_WIFI|Arduino Uno R4 WiFi|▲||

### STマイクロ STM32H747xI (Gaga R1)
|定義される定数|機種|対応状況|備考|
|:---|:---|:---:|:---|
|ARDUINO_GIGA_WIFI_MAIN|Arduino Giga R1 メインコア(M7)|▲||
|ARDUINO_GIGA_WIFI_SUB|Arduino Giga R1 サブコア(M4)|▲||

### ESP8266系統
|定義される定数|機種|対応状況|備考|
|:---|:---|:---:|:---|
| AMPERKA_WIFI_SLOT | Amperka WiFi Slot | ▲ |  |
| ESP8266_ADAFRUIT_HUZZAH | Adafruit Feather HUZZAH ESP8266 | ▲ |  |
| ESP8266_AGRUMINO_LEMON_V4 | Lifely Agrumino Lemon v4 | ▲ |  |
| ESP8285_GENERIC | Generic ESP8285 Module | ▲ |  |
| DOIT_ESP_MX_DEV_KIT | DOIT ESP-Mx DevKit (ESP8285) | ▲ |  |
| ESP8266_ESPDUINO | ESPDuino (ESP-13 Module) | ▲ |  |
| ESP8266_ESP210 | SweetPea ESP-210 | ▲ |  |
| ESP8266_ESPECTRO_CORE | ESPectro Core | ▲ |  |
| ESP8266_ESPINO_ESP12 | ESPino (ESP-12 Module) | ▲ |  |
| ESP8266_ESPINO_ESP13 | ThaiEasyElec's ESPino | ▲ |  |
| ESP8266_ESPRESSO_LITE_V1 | ESPresso Lite 1.0 | ▲ |  |
| ESP8266_ESPRESSO_LITE_V2 | ESPresso Lite 2.0 | ▲ |  |
| ESP8266_GENERIC | Generic ESP8266 Module | ▲ |  |
| ESP8266_INVENT_ONE | Invent One | ▲ |  |
| ESP8266_NODEMCU_ESP12 | NodeMCU 0.9 (ESP-12 Module) | ▲ |  |
| ESP8266_NODEMCU_ESP12E | NodeMCU 1.0 (ESP-12E Module) | ▲ |  |
| ESP8266_OAK | Digistump Oak | ▲ |  |
| ESP8266_PHOENIX_V1 | Phoenix 1.0 | ▲ |  |
| ESP8266_PHOENIX_V2 | Phoenix 2.0 | ▲ |  |
| ESP8266_SCHIRMILABS_EDUINO_WIFI | Schirmilabs Eduino WiFi | ▲ |  |
| ESP8266_THING_DEV | SparkFun ESP8266 Thing Dev | ▲ |  |
| ESP8266_WEMOS_D1MINILITE | LOLIN(WEMOS) D1 mini Lite | ▲ |  |
| ESP8266_WEMOS_D1MINIPRO | LOLIN(WEMOS) D1 mini Pro | ▲ |  |
| ESP8266_WEMOS_D1R1 | LOLIN(WeMos) D1 R1 | ▲ |  |
| ESP8266_XINABOX_CW01 | XinaBox CW01 | ▲ |  |
| ESP8266_GEN4_IOD | 4D Systems gen4 IoD Range | ▲ |  |
| MOD_WIFI_ESP8266 | Olimex MOD-WIFI-ESP8266(-DEV) | ▲ |  |
| WIFI_KIT_8 | WiFi Kit 8 | ▲ |  |
| WIFIDUINO_ESP8266 | WiFiduino | ▲ |  |
| ESP8266_THING | SparkFun ESP8266 Thing / Blynk Board | × | 2機種のいずれかまでは判定できない |
| ESP8266_WEMOS_D1MINI | LOLIN(WEMOS) D1 R2 & mini / D1 mini (clone) | × | 2機種のいずれかまでは判定できない |


機種を絞りきれないものは以下の表の通り．
|定義される定数|機種|
|:---|:---|
| ESP8266_THING | SparkFun ESP8266 Thing |
|  | Blynk Board |
| ESP8266_WEMOS_D1MINI | LOLIN(WEMOS) D1 R2 & mini |
|  | D1 mini (clone) |

機種判定もできない機種
- WifInfo
- ITEAD Sonoff
- Seeed Wio Link


### ESP32系統
|定義される定数|機種|対応状況|備考|
|:---|:---|:---:|:---|
| ARDUINO_NANO_ESP32_S3 | Arduino Nano ESP32 | ▲ |  |
| ADAFRUIT_FEATHER_ESP32S2_NOPSRAM | Adafruit Feather ESP32-S2 (no PSRAM) | ▲ |  |
| ALKS | ALKS ESP32 | ▲ |  |
| ATMEGA_ZERO_ESP32_S2 | ATMegaZero ESP32-S2 | ▲ |  |
| BPI_BIT | BPI-BIT | ▲ |  |
| MICRODUINO_CORE_ESP32 | Microduino-CoreESP32 | ▲ |  |
| D_DUINO_32 | D-duino-32 | ▲ |  |
| WEMOS_D1_MINI32 | WEMOS D1 MINI ESP32 | ▲ |  |
| DYDK | Deneyap Kart | ▲ |  |
| DYM | Deneyap Mini | ▲ |  |
| ESP32_DEVKIT_LIPO | OLIMEX ESP32-DevKit-LiPo | ▲ |  |
| ESP32_EVB | OLIMEX ESP32-EVB | ▲ |  |
| ESP32_GATEWAY | OLIMEX ESP32-GATEWAY | ▲ |  |
| ESP32_POE | OLIMEX ESP32-PoE | ▲ |  |
| ESP32_POE_ISO | OLIMEX ESP32-PoE-ISO | ▲ |  |
| ESP32_THING | SparkFun ESP32 Thing | ▲ |  |
| ESP32_THING_PLUS | SparkFun ESP32 Thing Plus | ▲ |  |
| ESP32_WROVER_KIT | ESP32 Wrover Kit (all versions) | ▲ |  |
| ESP320 | Electronic SweetPeas - ESP320 | ▲ |  |
| ESP32C3_DEV | ESP32C3 Dev Module | ▲ |  |
| ESP32S2_DEV | ESP32S2 Dev Module | ▲ |  |
| ESP32S2_THING_PLUS | SparkFun ESP32-S2 Thing Plus | ▲ |  |
| ESP32S2_USB | ESP32S2 Native USB | ▲ |  |
| ESP32VN_IOT_UNO | ESP32vn IoT Uno | ▲ |  |
| ESPEA32 | ESPea32 | ▲ |  |
| ESPECTRO32 | ESPectro32 | ▲ |  |
| ESPINO32 | ThaiEasyElec's ESPino32 | ▲ |  |
| FEATHER_ESP32 | Adafruit ESP32 Feather | ▲ |  |
| FEATHER_S2 | UM FeatherS2 | ▲ |  |
| FEATHER_S2_NEO | UM FeatherS2 Neo | ▲ |  |
| FM_DEV_KIT | ESP32 FM DevKit | ▲ |  |
| FRANZININHO_WIFI | Franzininho WiFi | ▲ |  |
| FRANZININHO_WIFI_MSC | Franzininho WiFi MSC | ▲ |  |
| FROG_ESP32 | Frog Board ESP32 | ▲ |  |
| FUNHOUSE_ESP32S2 | Adafruit FunHouse | ▲ |  |
| HEALTHYPI_4 | ProtoCentral HealthyPi 4 | ▲ |  |
| HELTEC_WIFI_KIT_32 | Heltec WiFi Kit 32 | ▲ |  |
| HELTEC_WIFI_LORA_32 | Heltec WiFi LoRa 32 | ▲ |  |
| HELTEC_WIFI_LORA_32_V2 | Heltec WiFi LoRa 32(V2) | ▲ |  |
| HELTEC_WIRELESS_STICK | Heltec Wireless Stick | ▲ |  |
| HELTEC_WIRELESS_STICK_LITE | Heltec Wireless Stick Lite | ▲ |  |
| HONEY_LEMON | HONEYLemon | ▲ |  |
| HORNBILL_ESP32_DEV | Hornbill ESP32 Dev | ▲ |  |
| HORNBILL_ESP32_MINIMA | Hornbill ESP32 Minima | ▲ |  |
| IMBRIOS_LOGSENS_V1P1 | IMBRIOS LOGSENS_V1P1 | ▲ |  |
| INTOROBOT_ESP32_DEV | IntoRobot Fig | ▲ |  |
| LOLIN_D32 | LOLIN D32 | ▲ |  |
| LOLIN_D32_PRO | LOLIN D32 PRO | ▲ |  |
| LOLIN32 | WEMOS LOLIN32 | ▲ |  |
| LOLIN32_LITE | WEMOS LOLIN32 Lite | ▲ |  |
| LOPY | LoPy | ▲ |  |
| LOPY4 | LoPy4 | ▲ |  |
| M5STACK_ATOM | M5Stack-ATOM | ▲ |  |
| M5STACK_CORE_ESP32 | M5Stack-Core-ESP32 | ▲ |  |
| M5STACK_CORE2 | M5Stack-Core2 | ▲ |  |
| M5STACK_CORE_INK | M5Stack-CoreInk | ▲ |  |
| M5STACK_FIRE | M5Stack-FIRE | ▲ |  |
| M5STACK_C | M5Stick-C | ▲ |  |
| MAG_TAG29_ESP32_S2 | Adafruit MagTag 2.9 | ▲ |  |
| METRO_ESP32 | Metro ESP-32 | ▲ |  |
| METRO_ESP32_S2 | Adafruit Metro ESP32-S2 | ▲ |  |
| MGBOT_IOTIK32A | MGBOT IOTIK 32A | ▲ |  |
| MGBOT_IOTIK32B | MGBOT IOTIK 32B | ▲ |  |
| MH_ET_LIVE_ESP32_DEV_KIT | MH ET LIVE ESP32DevKIT | ▲ |  |
| MH_ET_LIVE_ESP32_MINI_KIT | MH ET LIVE ESP32MiniKit | ▲ |  |
| MICRO_S2 | microS2 | ▲ |  |
| NANO32 | Nano32 | ▲ |  |
| NODE_32S | Node32s | ▲ |  |
| NODE_MCU_32S | NodeMCU-32S | ▲ |  |
| ODROID_ESP32 | ODROID ESP32 | ▲ |  |
| ONEHORSE_ESP32_DEV | Onehorse ESP32 Dev Module | ▲ |  |
| OPEN_KB | INEX OpenKB | ▲ |  |
| OROCA_EDUBOT | OROCA EduBot | ▲ |  |
| PIRANHA | Piranha ESP-32 | ▲ |  |
| PYCOM_GPY | Pycom GPy | ▲ |  |
| NODUINO_QUANTUM | Noduino Quantum | ▲ |  |
| SENSES_IOT_WEIZEN | Senses's WEIZEN | ▲ |  |
| T_BEAM | T-Beam | ▲ |  |
| TINY_PICO | UM TinyPICO | ▲ |  |
| TINY_S2 | UM TinyS2 | ▲ |  |
| TRUEVERIT_ESP32_UNIVERSAL_IOT_DRIVER | Trueverit ESP32 Universal IoT Driver | ▲ |  |
| TRUEVERIT_ESP32_UNIVERSAL_IOT_DRIVER_MK2 | Trueverit ESP32 Universal IoT Driver MK II | ▲ |  |
| TTGO_LORA32_V1 | TTGO LoRa32-OLED V1 | ▲ |  |
| TTGO_LORA32_V21_NEW | TTGO LoRa32-OLED v2.1.6 | ▲ |  |
| TTGO_T1 | TTGO T1 | ▲ |  |
| TTGO_T7_V13_MINI_32 | TTGO T7 V1.3 Mini32 | ▲ |  |
| TTGO_T7_V14_MINI_32 | TTGO T7 V1.4 Mini32 | ▲ |  |
| TWATCH | TTGO T-Watch | ▲ |  |
| UBLOX_NINA_W10 | u-blox NINA-W10 series (ESP32) | ▲ |  |
| UPESY_WROOM | uPesy ESP32 Wroom DevKit | ▲ |  |
| UPESY_WROVER | uPesy ESP32 Wrover DevKit | ▲ |  |
| WESP32 | Silicognition wESP32 | ▲ |  |
| WIDORA_AIR | Widora AIR | ▲ |  |
| WIFIDUINO_32 | WiFiduino32 | ▲ |  |
| WIPY3 | WiPy 3.0 | ▲ |  |
| POCKET_32 | Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery | × | 2機種のうちいずれかまでは判別不可 |
| ESP32_PICO | ESP32_PICO ( three kinds of board) | × | 3機種のうちいずれかまでは判別不可 |
| ESP32_DEV | ESP32 Dev Modules (twelve kinds of board) | × | 12機種のうちいずれかまでは判別不可 |


機種を絞りきれないものは以下の表の通り．
|定義される定数|機種|
|:---|:---|
| POCKET_32 | Dongsen Tech Pocket 32 |
|  | WeMos WiFi&Bluetooth Battery |
| ESP32_PICO | ESP32 PICO-D4 |
|  | Turta IoT Node |
|  | KITS ESP32 EDU |
| ESP32_DEV | ESP32 Wrover Module |
|  | AI Thinker ESP32-CAM |
|  | ESP32 Dev Module |
|  | S.ODI Ultra v1 |
|  | MagicBit |
|  | XinaBox CW02 |
|  | SparkFun LoRa Gateway 1-Channel |
|  | FireBeetle-ESP32 |
|  | DOIT ESP32 DEVKIT V1 |
|  | DOIT ESPduino32 |
|  | VintLabs ESP32 Devkit |
|  | Labplus mPython |

機種判定もできない機種
- Denky
- KB32-FT
- SparkFun ESP32 MicroMod
- ET-Board
- M5Stack-Timer-CAM

### RP2040
|定義される定数|機種|対応状況|備考|
|:---|:---|:---:|:---|
|	ARDUINO_NANO_RP2040_C	|	Arduino Nano RP2040 connect	|	◯	|		|
|	PI_PICO	|	Raspberry Pi Pico	|	◯	|	L'atelier d'Arnoz DudesCabも同じ定義となる	|
|	PI_PICO_W	|	Raspberry Pi Pico W	|	◯	|	公式環境ではPicoと区別できない	|
|	ZERO_XCB_HELIOS	|	0xCB Helios	|	▲	|		|
|	BRIDGETEK_IDM2040	|	BridgeTek IDM2040-7A	|	▲	|		|
|	ADAFRUIT_FEATHER_RP2040	|	Adafruit Feather RP2040	|	▲	|		|
|	ADAFRUIT_FEATHER_RP2040_SCORPIO	|	Adafruit Feather RP2040 SCORPIO	|	▲	|		|
|	ADAFRUIT_FEATHER_RP2040_DVI	|	Adafruit Feather RP2040 DVI	|	▲	|		|
|	ADAFRUIT_FEATHER_RP2040_RFM	|	Adafruit Feather RP2040 RFM	|	▲	|		|
|	ADAFRUIT_FEATHER_RP2040_THINKINK	|	Adafruit Feather RP2040 ThinkINK	|	▲	|		|
|	ADAFRUIT_FEATHER_RP2040_USB_HOST	|	Adafruit Feather RP2040 USB Host	|	▲	|		|
|	ADAFRUIT_FEATHER_RP2040_CAN	|	Adafruit Feather RP2040 CAN	|	▲	|		|
|	ADAFRUIT_FEATHER_RP2040_PROP_MAKER	|	Adafruit Feather RP2040 Prop-Maker	|	▲	|		|
|	ADAFRUIT_ITSYBITSY_RP2040	|	Adafruit ItsyBitsy RP2040	|	▲	|		|
|	ADAFRUIT_METRO_RP2040	|	Adafruit Metro RP2040	|	▲	|		|
|	ADAFRUIT_QTPY_RP2040	|	Adafruit QT Py RP2040	|	▲	|		|
|	ADAFRUIT_STEMMAFRIEND_RP2040	|	Adafruit STEMMA Friend RP2040	|	▲	|		|
|	ADAFRUIT_TRINKEYQT_RP2040	|	Adafruit Trinkey RP2040 QT	|	▲	|		|
|	ADAFRUIT_MACROPAD_RP2040	|	Adafruit MacroPad RP2040	|	▲	|		|
|	ADAFRUIT_KB2040_RP2040	|	Adafruit KB2040	|	▲	|		|
|	ARTRONSHOP_RP2_NANO	|	ArtronShop RP2 Nano	|	▲	|		|
|	CYTRON_MAKER_NANO_RP2040	|	Cytron Maker Nano RP2040	|	▲	|		|
|	CYTRON_MAKER_PI_RP2040	|	Cytron Maker Pi RP2040	|	▲	|		|
|	CYTRON_MAKER_UNO_RP2040	|	Cytron Maker Uno RP2040	|	▲	|		|
|	DATANOISETV_PICOADK	|	DatanoiseTV PicoADK	|	▲	|		|
|	DEGZ_SUIBO_RP2040	|	Degz Robotics Suibo RP2040	|	▲	|		|
|	FLYBOARD2040_CORE	|	DeRuiLab FlyBoard2040Core	|	▲	|		|
|	DFROBOT_BEETLE_RP2040	|	DFRobot Beetle RP2040	|	▲	|		|
|	ELECTRONICCATS_HUNTERCAT_NFC	|	ElectronicCats HunterCat NFC RP2040	|	▲	|		|
|	EXTREMEELEXTRONICS_RC2040	|	ExtremeElectronics RC2040	|	▲	|		|
|	CHALLENGER_2040_LTE_RP2040	|	iLabs Challenger 2040 LTE	|	▲	|		|
|	CHALLENGER_2040_LORA_RP2040	|	iLabs Challenger 2040 LoRa	|	▲	|		|
|	CHALLENGER_2040_SUBGHZ_RP2040	|	iLabs Challenger 2040 SubGHz	|	▲	|		|
|	CHALLENGER_2040_WIFI_RP2040	|	iLabs Challenger 2040 WiFi	|	▲	|		|
|	CHALLENGER_2040_WIFI_BLE_RP2040	|	iLabs Challenger 2040 WiFi/BLE	|	▲	|		|
|	CHALLENGER_2040_WIFI6_BLE_RP2040	|	iLabs Challenger 2040 WiFi6/BLE	|	▲	|		|
|	CHALLENGER_NB_2040_WIFI_RP2040	|	iLabs Challenger NB 2040 WiFi	|	▲	|		|
|	CHALLENGER_2040_SDRTC_RP2040	|	iLabs Challenger 2040 SD/RTC	|	▲	|		|
|	CHALLENGER_2040_NFC_RP2040	|	iLabs Challenger 2040 NFC	|	▲	|		|
|	CHALLENGER_2040_UWB_RP2040	|	iLabs Challenger 2040 UWB	|	▲	|		|
|	CONNECTIVITY_2040_LTE_WIFI_BLE_RP2040	|	iLabs Connectivity 2040 LTE/WiFi/BLE	|	▲	|		|
|	ILABS_2040_RPICO32_RP2040	|	iLabs RPICO32	|	▲	|		|
|	MELOPERO_COOKIE_RP2040	|	Melopero Cookie RP2040	|	▲	|		|
|	MELOPERO_SHAKE_RP2040	|	Melopero Shake RP2040	|	▲	|		|
|	NEKOSYSTEMS_BL2040_MINI	|	Neko Systems BL2040 Mini	|	▲	|		|
|	NULLBITS_BIT_C_PRO	|	nullbits Bit-C PRO	|	▲	|		|
|	OLIMEX_RP2040_PICO30_2MB	|	Olimex RP2040-Pico30 2MB	|	▲	|		|
|	OLIMEX_RP2040_PICO30_16MB	|	Olimex RP2040-Pico30 16MB	|	▲	|		|
|	PIMORONI_PGA2040	|	Pimoroni PGA2040	|	▲	|		|
|	PIMORONI_PLASMA2040	|	Pimoroni Plasma2040	|	▲	|		|
|	PIMORONI_TINY2040	|	Pimoroni Tiny2040	|	▲	|		|
|	RAKWIRELESS_RAK11300	|	RAKwireless RAK11300	|	▲	|		|
|	REDSCORP_RP2040_EINS	|	redscorp RP2040-Eins	|	▲	|		|
|	REDSCORP_RP2040_PROMINI	|	redscorp RP2040-ProMini	|	▲	|		|
|	SEA_PICRO	|	Generic Sea-Picro	|	▲	|		|
|	SILICOGNITION_RP2040_SHIM	|	Silicognition RP2040-Shim	|	▲	|		|
|	SOLDERPARTY_RP2040_STAMP	|	Solder Party RP2040 Stamp	|	▲	|		|
|	SPARKFUN_MICROMOD_RP2040	|	SparkFun MicroMod RP2040	|	▲	|		|
|	SPARKFUN_PROMICRO_RP2040	|	SparkFun ProMicro RP2040	|	▲	|		|
|	SPARKFUN_THINGPLUS_RP2040	|	SparkFun Thing Plus RP2040	|	▲	|		|
|	UPESY_RP2040_DEVKIT	|	uPesy RP2040 DevKit	|	▲	|		|
|	SEEED_INDICATOR_RP2040	|	Seeed INDICATOR RP2040	|	▲	|		|
|	SEEED_XIAO_RP2040	|	Seeed XIAO RP2040	|	▲	|		|
|	YD_RP2040	|	VCC-GND YD RP2040	|	▲	|		|
|	VIYALAB_MIZU_RP2040	|	Viyalab Mizu RP2040	|	▲	|		|
|	WAVESHARE_RP2040_ZERO	|	Waveshare RP2040 Zero	|	▲	|		|
|	WAVESHARE_RP2040_ONE	|	Waveshare RP2040 One	|	▲	|		|
|	WAVESHARE_RP2040_MATRIX	|	Waveshare RP2040 Matrix	|	▲	|		|
|	WAVESHARE_RP2040_PIZERO	|	Waveshare RP2040 PiZero	|	▲	|		|
|	WAVESHARE_RP2040_PLUS	|	Waveshare RP2040 Plus 4MB/16MB	|	▲	|	IDE上では別機種扱いだが，開発環境内でストレージ容量による区別はできない	|
|	WAVESHARE_RP2040_LCD_0_96	|	Waveshare RP2040 LCD 0.96	|	▲	|		|
|	WAVESHARE_RP2040_LCD_1_28	|	Waveshare RP2040 LCD 1.28	|	▲	|		|
|	WIZNET_5100S_EVB_PICO	|	WIZnet W5100S-EVB-Pico	|	▲	|		|
|	WIZNET_WIZFI360_EVB_PICO	|	WIZnet WizFi360-EVB-Pico	|	▲	|		|
|	WIZNET_5500_EVB_PICO	|	WIZnet W5500-EVB-Pico	|	▲	|		|
|	GENERIC_RP2040	|	Generic RP2040	|	▲	|		|
