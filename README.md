# detectArduinoHardware
Arduinoの機種を区別するライブラリ．動作検証はあまいです．なにせ，手元に現物がない装置がほとんどで，コンパイルエラーの有無ぐらいしか
確認できません．


## ライセンス
なんでもよかったんだけど，とりあえず
BSDライセンスにしときます．詳細はLICENCEファイルを見てください．



## 使い方

コンパイル時の引数などを見て，コンパイル対象の機種を判断し，
各種の定数を定義してくれるので，自分の書くプログラムは，機種による切り替えを次のようなif文で行う．

```
#if HARDWARE_TYPE == AVR_UNO
   Arduino Uno用のプログラム
#endif
```

あと，おまけのマクロとして，シリアルポートをオープンすると，リセットがかかる
機種(Unoを始めとして大部分)とかからない機種(LeonardoやM0など)で処理を
細かく「#if ...」とするのが面倒なので，「waitForSerial()」という関数を
マクロで定義してあります．
このマクロはsetup関数の中で使うと便利です．
```
setup(){
  Serial.begin(9600);
  waitForSerial();
  初期化処理の続き
}
```
上のようなコードを書くと，シリアルポートオープンでリセットがかかる
機種はなにもせず，リセットがかからない機種は，シリアルポートを開けるまで
待ち合わせをします．

他にも，代表的な機種では，下のような定数を自動で定義するので活用してください．
使われる可能性が高いのは，I2CやSPIのポート番号とAREFの電圧でしょうか．表中の
定数のうち，わかりにくいものは下に説明を追加しておきます．

|定数|内容|値の例|
|:---|:---|:---|
|HARDWARE_TYPE|機種|AVR_UNO(実際は整数)|
|HARDWARE_NAME|機種名(文字列)|"ARDUINO UNO"|
|HARDWARE_VDD|動作電圧|3.3|
|HARDWARE_AREF|アナログ端子の基準電圧|3.3|
|MAX_SERIAL|ハードウェアシリアルの数|1 (Megaは4)|
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
|PERIPHERAL_RESET|周辺機器のリセット用ポートのポート番号|7|

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

### マクロ
Arduino IDEでシリアルモニタを開いた場合に自動でリセットがかかる
機種とそれ以外で処理を変える場合に使うマクロ．
```
/*
 * シリアルポートのオープンでリセットがかからない機器への対応策
 */
#define waitForSerial() while(!SERIAL_RESET && (!Serial))
```


## 対応しているボード
Arduino IDEのボードマネージャから確認した手元の環境．
|アーキ等|開発者|バージョン|
|:---|:---|:---|
|Arduino AVR Boards Built-In|Arduino|1.6.23|
|Arduino SAM Boards (32-bits ARM Cortex-M3)|Arduino|1.6.12|
|Arduino SAMD Boards (32-bits ARM Cortex-M0+)|Arduino|1.6.21|
|esp32|Espressif Systems|1.0.2|
|esp8266|ESP8266 Community|2.5.0|

上の環境でIDEがサポートしている機種の大部分
(ごく一部のESP32の機種以外)は機種判定はできます．
詳細は以下の表に記載しますが，表の「対応状況」が
「○」の機種はピン番号等まで定義しますが，他の機種は対応しません(詳細不明なため)．

古い機種やESP8266/ESP32はぱっと検索したぐらいではわからないものが
ほとんどなので諦めています． (情報をだれかがくれれば追加しますけど．)
### AVR系列
|HARDWARE_TYPEの値|機種|対応状況|備考|
|:---|:---|:---:|:---|
|AVR_YUN|Arduino Yun|○||
|AVR_UNO|Arduino Uno|○||
|AVR_DUEMILANOVE_328P|Arduino Duemilanove (ATmega328P搭載)|○||
|AVR_DUEMILANOVE_168|Arduino Duemilanove (ATmega168搭載)|○||
|AVR_NANO_328P|Arduino Nano (ATmega328P搭載)|○||
|AVR_NANO_168|Arduino Nano (ATmega168搭載)|○||
|AVR_MEGA2560|Arduino Mega2560|○||
|AVR_MEGA|Arduino Mega|○||
|AVR_ADK|Arduino ADK|○||
|AVR_LEONARDO|Arduino Leonardo|○||
|AVR_LEONARDO_ETH|Arduino Leonardo Ethernet|○||
|AVR_MICRO|Arduino Micro|○||
|AVR_ESPLORA|Arduino Esplora|△|I2Cのピンが不明|
|AVR_MINI_328P|Arduino Mini  (ATmega328P搭載)|○||
|AVR_MINI_168|Arduino Mini (ATmega168搭載)|○||
|AVR_ETHERNET|Arduino Ethernet|○||
|AVR_FIO|Arduino Fio|○||
|AVR_BT_328P|Arduino BT (ATmega328P)|○||
|AVR_BT_168|Arduino BT (ATmega168)|○||
|AVR_LILYPAD_USB|LilyPad Arduino USB|||
|AVR_LILYPAD_328P|LilyPad Arduino (ATmega328P)|||
|AVR_LILYPAD_168|LilyPad Arduino (ATmega168)|||
|AVR_PRO_328P_5V|Arduino Pro or Pro Mini (ATmega328P 5V)|○|ピン等はPro miniに合わせてます|
|AVR_PRO_328P_3_3V|Arduino Pro or Pro Mini (ATmega328P 3.3V)|○|同上|
|AVR_PRO_168_5V|Arduino Pro or Pro Mini (ATmega168 5V)|○|同上|
|AVR_PRO_168_3_3V|Arduino Pro or Pro Mini (ATmega168 3.3V)|○|同上|
|AVR_NG_168|Arduino NG (ATmega168)|||
|AVR_NG_8|Arduino NG (ATmega8)|||
|AVR_ROBOT_CONTROL|Arduino Robot Control|||
|AVR_ROBOT_MOTOR|Arduino Robot Motor|||
|AVR_GEMMA|Arduino Gemma|○||
|AVR_CIRCUITPLAY|Arduino Circuit play|||
|AVR_YUNMINI|Arduino Yun Mini|||
|AVR_INDUSTRIAL101|Arduino Industrial101|||
|AVR_LININO_ONE|Arduino Lilino One|||
|AVR_UNO_WIFI_DEV_ED|Arduino Uno Wifi Developer Edition|||

### SAM系統
|定義される定数|機種|対応状況|
|:---|:---|:---:|
|SAM_DUE|Arduino Due|○|

### SAMD系統
|定義される定数|機種|対応状況|
|:---|:---|:---:|
|SAMD_ZERO|Arduino Zero||
|SAMD_MKR1000|Arduino/Genuino MKR1000||
|SAMD_MKRZERO|Arduino MKRZero||
|SAMD_MKRFox1200|Arduino MKRFox1200||
|SAMD_MKRGSM1400|Arduino MKR GSM 1400||
|SAMD_MKRWAN1300|Arduino MKR WAN 1300||
|SAMD_MKRWIFI1010|Arduino MKR WiFi 1010||
|SAMD_CIRCUITPLAYGROUND_EXPRESS|Adafruit Circuit Playground M0||
|SAM_ZERO|M0 pro / M0|○|
|SAMD_TIAN|Arduino Tian||

### ESP8266系統
|定義される定数|機種|対応状況|
|:---|:---|:---:|
|ESP8266_GENERIC|ESP8266 Generic / Invent One / XinaBox CW01||
|ESP8285_GENERIC|Generic ESP8265||
|ESP8266_ESPDUINO|ESPDuino (ESP-13 Module) / ThaiEasyElec's ESPino||
|ESP8266_ESPINO|Adafruit Feather HUZZAH ESP8266 /ESPino (ESP-12 Module) / WifInfo||
|ESP8266_WIFINFO|||
|ESP8266_WIFINFO2|||
|ESP8266_ESPRESSO_LITE_V1|ESPresso Lite 1.0||
|ESP8266_ESPRESSO_LITE_V2|ESPresso Lite 2.0||
|ESP8266_PHOENIX_V1|Phoenix 1.0||
|ESP8266_PHOENIX_V2|Phoenix 2.0||
|ESP8266_NODEMCU|NodeMCU 0.9 (ESP-12 Module) / NodeMCU 1.0 (ESP-12E Module) / nodemcuv2||
|ESP8266_MOD_WIFI|Olimex MOD-WIFI-ESP8266(-DEV)||
|ESP8266_THING|SparkFun ESP8266 Thing||
|ESP8266_THING_DEV|SparkFun ESP8266 Thing Dev||
|ESP8266_ESP210|SweetPea ESP-210||
|ESP8266_WEMOS_D1MINI|LOLIN(WEMOS) D1 R2 & mini||
|ESP8266_WEMOS_D1MINIPRO|LOLIN(WEMOS) D1 mini Pro||
|ESP8266_WEMOS_D1MINILITE|LOLIN(WEMOS) D1 mini Lite||
|ESP8266_WEMOS_D1R1|WeMos D1 R1||
|ESP8266_STAR_OTTO|Arduino (esp8266)||
|ESP8266_UNOWIFI|||
|ESP8266_ARDUINO|||
|ESP8266_PRIMO|||
|ESP8266_GEN4_IOD|4D Systems gen4 IoD Range||
|ESP8266_OAK|Digistump Oak||
|ESP8266_WIFIDUINO|WiFiduino||
|ESP8266_AMPERKA_WIFI_SLOT|Amperka WiFi Slot||
|ESP8266_WIO_LINK|Seeed Wio Link||
|ESP8266_ESPECTRO_CORE|ESPectro Core||

### ESP32系統
|定義される定数|機種|対応状況|
|:---|:---|:---:|
|ESP32_GENERIC|ESP32 Generic (ESP32 Dev Module / Wrover Module / XinaBox CW02 / FireBeetle-ESP32 / DOIT ESP32 DEVKIT V1 ||
|ESP32_PICO|Pico Kit / Turta IoT Node||
|ESP32_TTGO_LoRa32_V1|TTGO LoRa32-OLED V1||
|ESP32_THING|SparkFun ESP32 Thing||
|ESP32_UBLOX_NINA_W10|u-blox NINA-W10||
|ESP32_WIDORA_AIR|Widora AIR||
|ESP32_ESP320|Electronic SweetPeas - ESP320||
|ESP32_NANO32|Nano320||
|ESP32_LOLIN_D32|Lolin D32||
|ESP32_LOLIN_D32_PRO|Lolin D32 Pro||
|ESP32_LOLIN32|Wemos Lolin32||
|ESP32_Pocket32|Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery||
|ESP32_ESPea32|ESPea32||
|ESP32_QUANTUM|Noduino Quantum||
|ESP32_Node32s|Node32s||
|ESP32_HORNBILL_DEV|Hornbill32dev||
|ESP32_HORNBILL_MINIMA|Hornbill ESP32 Minima||
|ESP32_INTOROBOT_DEV|IntoRobot Fig||
|ESP32_ONEHORSE_DEV|Onehorse ESP32 Dev Module||
|ESP32_FEATHER|Adafruit ESP32 Feather||
|ESP32_NodeMCU_32S|NodeMCU-32S||
|ESP32_MH_ET_LIVE_DEVKIT|MH ET LIVE ESP32DevKIT||
|ESP32_MH_ET_LIVE_MINIKIT|MH ET LIVE ESP32MiniKit||
|ESP32_vn_iot_uno|ESP32vn IoT Uno||
|ESP32_EVB|OLIMEX ESP32-EVB||
|ESP32_GATEWAY|OLIMEX ESP32-GATEWAY||
|ESP32_POE|OLIMEX ESP32-PoE||
|ESP32_ESPino32|ThaiEasyElec's ESPino32||
|ESP32_M5Stack_Core|M5Stack-Core-ESP32||
|ESP32_M5STACK_FIRE|M5Stack-FIRE||
|ESP32_M5Stick_C|M5Stick-C||
|ESP32_ODROID|ODROID ESP32||
|ESP32_HELTEC_WIFI_KIT_32|Heltec WiFi Kit 32||
|ESP32_Heltec_WIFI_LoRa_32|Heltec WiFi LoRa 32||
|ESP32_Heltec_WIFI_LoRa_32_V2|Heltec Wireless Stick||
|ESP32_ESPECTRO32|ESPectro32||
|ESP32_CoreESP32|Microduino-CoreESP32||
|ESP32_ALKS|ALKS ESP32||
|ESP32_WIPY3|WiPy3||
|ESP32_WESP32|Silicognition wESP32||
|ESP32_LoPy|lopy||
|ESP32_LoPy4|lopy4||
|ESP32_OROCA_EDUBOT|oroca_edubot||
|ESP32_FROG_BOARD|Frog Board ESP32||

### 対応していないボード
|定義される定数|機種|対応状況|
|:---|:---|:---:|
|ESP32_BPI-BIT|BPI-BIT||
|ESP32_T-Beam|T-Beam||
|ESP32_D-duino-32|d-duino-32||
|ESP32_fm-devkit|ESP32 FM devkit||



## サンプルプログラム
```
#include "detectArduinoHardware.h"

String portName(int port) {
#if MAX_ANALOG > 0
  switch(port) {
    case A0 : return "A0";
#if MAX_ANALOG > 1
    case A1 : return "A1";
#if MAX_ANALOG > 2
    case A2 : return "A2";
#if MAX_ANALOG > 3
    case A3 : return "A3";
#if MAX_ANALOG > 4
    case A4 : return "A4";
#if MAX_ANALOG > 5
    case A5 : return "A5";
#if MAX_ANALOG > 6
    case A6 : return "A6";
#if MAX_ANALOG > 7
    case A7 : return "A7";
#if MAX_ANALOG > 8
    case A8 : return "A8";
#if MAX_ANALOG > 9
    case A9 : return "A9";
#if MAX_ANALOG > 10
    case A10 : return "A10";
#if MAX_ANALOG > 11
    case A11 : return "A11";
#if MAX_ANALOG > 12
    case A12 : return "A12";
#if MAX_ANALOG > 13
    case A13 : return "A13";
#if MAX_ANALOG > 14
    case A14 : return "A14";
#if MAX_ANALOG > 15
    case A15 : return "A15";
#endif /* MAX_ANALOG > 15 */
#endif /* MAX_ANALOG > 14 */
#endif /* MAX_ANALOG > 13 */
#endif /* MAX_ANALOG > 12 */
#endif /* MAX_ANALOG > 11 */
#endif /* MAX_ANALOG > 10 */
#endif /* MAX_ANALOG > 9 */
#endif /* MAX_ANALOG > 8 */
#endif /* MAX_ANALOG > 7 */
#endif /* MAX_ANALOG > 6 */
#endif /* MAX_ANALOG > 5 */
#endif /* MAX_ANALOG > 4 */
#endif /* MAX_ANALOG > 3 */
#endif /* MAX_ANALOG > 2 */
#endif /* MAX_ANALOG > 1 */
  }
#endif /* MAX_ANALOG > 0 */
  if ((0 > port ) || (port >MAX_DIGITAL)) return "Unkown";
  return ("D"+String(port));
}

String pmwPort(void) {
  int pmw[]=PMW_PORTS;
  if (pmw[0] == -1) return "no pmw port";
  String val="{ ";
  for (int i=0; i< (sizeof(pmw) / sizeof(pmw[0]));i++) {
    if (i!=0) val=val+", ";
    val=val+String(pmw[i]);
  }
  val=val+" }";
  return val;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  waitForSerial();

  Serial.print("Name                      : ");Serial.println(HARDWARE_NAME);
  Serial.print("Voltage                   : ");Serial.println(HARDWARE_VDD);
  Serial.print("AREF                      : ");Serial.println(HARDWARE_AREF);
  Serial.print("num of Serial             : ");Serial.println(MAX_SERIAL);
  Serial.print("num of digital            : ");Serial.println(MAX_DIGITAL);
  Serial.print("num of analog             : ");Serial.println(MAX_ANALOG);
  Serial.print("PMW ports                 : ");Serial.println(pmwPort());
  Serial.print("I2C SDA                   : ");Serial.println(portName(I2C_SDA));
  Serial.print("I2C SCL                   : ");Serial.println(portName(I2C_SCL));
  Serial.print("SPI MOSI                  : ");Serial.println(portName(SPI_MOSI));
  Serial.print("SPI MISO                  : ");Serial.println(portName(SPI_MISO));
  Serial.print("SPI SCK                   : ");Serial.println(portName(SPI_SCK));
  Serial.print("SPI SS                    : ");Serial.println(portName(SPI_SS));
  Serial.print("onboard LED               : ");Serial.println(portName(ONBOARD_LED));
  Serial.print("Reset when opening serial : ");
  if (SERIAL_RESET) {
    Serial.println("true");
  } else {
    Serial.println("false");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
```


