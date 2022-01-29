#ifndef __DETECT_ARDUINO_HARDWARE_H__
#define __DETECT_ARDUINO_HARDWARE_H__

#include <Arduino.h>

/* チップセットの種別 */
#define AVR_ARCH          1
#define SAM_ARCH          2
#define SAMD_ARCH         3
#define XTENSA_LX106_ARCH 4 /* ESP8266 */
#define XTENSA_LX6_ARCH   5 /* ESP32 */

#define TYPE_ATmega32U4  1
#define TYPE_ATmega328P  2
#define TYPE_ATmega168   3
#define TYPE_ATmega2560  4
#define TYPE_ATmega1280  5
#define TYPE_ATmega8     6
#define TYPE_ATtimy85    7
#define TYPE_SAM3X8E     8
#define TYPE_SAMD21G18A  9
#define TYPE_ESP8266    10
#define TYPE_ESP32      11

/* AVR系統 */
#define ARDUINO_YUN                         1 /* Arduino Yun                           */
#define ARDUINO_UNO                         2 /* Arduino Uno                           */
#define ARDUINO_DUEMILANOVE_328P            3 /* Arduino Duemilanove or Diecimila 328P */
#define ARDUINO_DUEMILANOVE_168             4 /* Arduino Duemilanove or Diecimila 168  */
#define ARDUINO_NANO_328P                   5 /* Arduino Nano 328P                     */
#define ARDUINO_NANO_168                    6 /* Arduino Nano 168                      */
#define ARDUINO_MEGA2560                    7 /* Arduino Mega 2560                     */
#define ARDUINO_MEGA                        8 /* Arduino Mega                          */
#define ARDUINO_MEGA_ADK                    9 /* Arduino Mega ADK                      */
#define ARDUINO_LEONARDO                   10 /* Arduino Leonardo                      */
#define ARDUINO_LEONARDO_ETH               11 /* Arduino Leonardo ETH                  */
#define ARDUINO_MICRO                      12 /* Arduino Micro                         */
#define ARDUINO_ESPLORA                    13 /* Arduino Esplora                       */
#define ARDUINO_MINI_328P                  14 /* Arduino Mini 328P                     */
#define ARDUINO_MINI_168                   15 /* Arduino Mini 168                      */
#define ARDUINO_ETHERNET                   16 /* Arduino Ethernet                      */
#define ARDUINO_FIO                        17 /* Arduino Fio                           */
#define ARDUINO_BT_328P                    18 /* Arduino BT 328P                       */
#define ARDUINO_BT_168                     19 /* Arduino BT 168                        */
#define ARDUINO_LILYPAD_USB                20 /* LilyPad Arduino USB                   */
#define ARDUINO_LILYPAD_328P               21 /* LilyPad Arduino 328P                  */
#define ARDUINO_LILYPAD_168                22 /* LilyPad Arduino 168                   */
#define ARDUINO_NG_168                     23 /* Arduino NG or older 168               */
#define ARDUINO_NG_8                       24 /* Arduino NG or older 8                 */
#define ARDUINO_ROBOT_CONTROL              25 /* Arduino Robot Control                 */
#define ARDUINO_ROBOT_MOTOR                26 /* Arduino Robot Motor                   */
#define ARDUINO_GEMMA                      27 /* Arduino Gemma                         */
#define ARDUINO_CIRCUIT_PLAY               28 /* Adafruit Circuit Playground           */
#define ARDUINO_YUN_MINI                   29 /* Arduino Yun Mini                      */
#define ARDUINO_INDUSTRIAL101              30 /* Arduino Industrial 101                */
#define ARDUINO_LININO_ONE                 31 /* Linino One                            */
#define ARDUINO_UNO_WIFI_DEV_ED            32 /* Arduino Uno WiFi                      */
#define ARDUINO_PRO_328P_5V                33 /* Arduino Pro or Pro Mini 328P 5V       */
#define ARDUINO_PRO_328P_3_3V              34 /* Arduino Pro or Pro Mini 328P 3.3V     */
#define ARDUINO_PRO_168_5V                 35 /* Arduino Pro or Pro Mini 168 5V        */
#define ARDUINO_PRO_168_3_3V               36 /* Arduino Pro or Pro Mini 168 3.3V      */


/*  SAM系統  */
#define ARDUINO_DUE                       101 /* Arduino Due                           */

/*  SAMD系統  */
#define ARDUINO_ZERO                      201 /* Arduino Zero                          */
#define ARDUINO_MKR1000                   202 /* Arduino MKR1000                       */
#define ARDUINO_MKRZERO                   203 /* Arduino MKRZero                       */
#define ARDUINO_MKRWIFI1010               204 /* Arduino MKR WiFi 1010                 */
#define ARDUINO_NANO_33_IOT               205 /* Arduino NANO 33 IoT                   */
#define ARDUINO_MKRFOX1200                206 /* Arduino MKR FOX 1200                  */
#define ARDUINO_MKRWAN1300                207 /* Arduino MKR WAN 1300                  */
#define ARDUINO_MKRWAN1310                208 /* Arduino MKR WAN 1310                  */
#define ARDUINO_MKRGSM1400                209 /* Arduino MKR GSM 1400                  */
#define ARDUINO_MKRNB1500                 210 /* Arduino MKR NB 1500                   */
#define ARDUINO_MKRVIDOR4000              211 /* Arduino MKR Vidor 4000                */
#define ARDUINO_CIRCUITPLAYGROUND_EXPRESS 212 /* Adafruit Circuit Playground M0        */
#define ARDUINO_TIAN                      213 /* Arduino Tian                          */
#define ARDUINO_M0                        214 /* Arduino M0 / M0 Pro                   */

/* ESP8266系統 */
#define  AMPERKA_WIFI_SLOT               301 /*  Amperka WiFi Slot                            */
#define  ESP8266_ADAFRUIT_HUZZAH         302 /*  Adafruit Feather HUZZAH ESP8266              */
#define  ESP8266_AGRUMINO_LEMON_V4       303 /*  Lifely Agrumino Lemon v4                     */
#define  ESP8285_GENERIC                 304 /*  Generic ESP8285 Module                       */
#define  DOIT_ESP_MX_DEV_KIT             305 /*  DOIT ESP-Mx DevKit (ESP8285)                 */
#define  ESP8266_ESPDUINO                306 /*  ESPDuino (ESP-13 Module)                     */
#define  ESP8266_ESP210                  307 /*  SweetPea ESP-210                             */
#define  ESP8266_ESPECTRO_CORE           308 /*  ESPectro Core                                */
#define  ESP8266_ESPINO_ESP12            309 /*  ESPino (ESP-12 Module)                       */
#define  ESP8266_ESPINO_ESP13            310 /*  ThaiEasyElec's ESPino                        */
#define  ESP8266_ESPRESSO_LITE_V1        311 /*  ESPresso Lite 1.0                            */
#define  ESP8266_ESPRESSO_LITE_V2        312 /*  ESPresso Lite 2.0                            */
#define  ESP8266_GENERIC                 313 /*  Generic ESP8266 Module                       */
#define  ESP8266_INVENT_ONE              314 /*  Invent One                                   */
#define  ESP8266_NODEMCU_ESP12           315 /*  NodeMCU 0.9 (ESP-12 Module)                  */
#define  ESP8266_NODEMCU_ESP12E          316 /*  NodeMCU 1.0 (ESP-12E Module)                 */
#define  ESP8266_OAK                     317 /*  Digistump Oak                                */
#define  ESP8266_PHOENIX_V1              318 /*  Phoenix 1.0                                  */
#define  ESP8266_PHOENIX_V2              319 /*  Phoenix 2.0                                  */
#define  ESP8266_SCHIRMILABS_EDUINO_WIFI 320 /*  Schirmilabs Eduino WiFi                      */
#define  ESP8266_THING_DEV               321 /*  SparkFun ESP8266 Thing Dev                   */
#define  ESP8266_WEMOS_D1MINILITE        322 /*  LOLIN(WEMOS) D1 mini Lite                    */
#define  ESP8266_WEMOS_D1MINIPRO         323 /*  LOLIN(WEMOS) D1 mini Pro                     */
#define  ESP8266_WEMOS_D1R1              324 /*  LOLIN(WeMos) D1 R1                           */
#define  ESP8266_XINABOX_CW01            325 /*  XinaBox CW01                                 */
#define  ESP8266_GEN4_IOD                326 /*  4D Systems gen4 IoD Range                    */
#define  MOD_WIFI_ESP8266                327 /*  Olimex MOD-WIFI-ESP8266(-DEV)                */
#define  WIFI_KIT_8                      328 /*  WiFi Kit 8                                   */
#define  WIFIDUINO_ESP8266               329 /*  WiFiduino                                    */
#define  ESP8266_THING                   330 /*  SparkFun ESP8266 Thing / Blynk Board         */
#define  ESP8266_WEMOS_D1MINI            331 /*  LOLIN(WEMOS) D1 R2 & mini / D1 mini (clone)  */

/*  ESP32系統 */
#define ADAFRUIT_FEATHER_ESP32S2_NOPSRAM         401  /* Adafruit Feather ESP32-S2 (no PSRAM)                  */
#define ALKS                                     402  /* ALKS ESP32                                            */
#define ATMEGA_ZERO_ESP32_S2                     403  /* ATMegaZero ESP32-S2                                   */
#define BPI_BIT                                  404  /* BPI-BIT                                               */
#define MICRODUINO_CORE_ESP32                    405  /* Microduino-CoreESP32                                  */
#define D_DUINO_32                               406  /* D-duino-32                                            */
#define WEMOS_D1_MINI32                          407  /* WEMOS D1 MINI ESP32                                   */
#define DYDK                                     408  /* Deneyap Kart                                          */
#define DYM                                      409  /* Deneyap Mini                                          */
#define ESP32_DEVKIT_LIPO                        410  /* OLIMEX ESP32-DevKit-LiPo                              */
#define ESP32_EVB                                411  /* OLIMEX ESP32-EVB                                      */
#define ESP32_GATEWAY                            412  /* OLIMEX ESP32-GATEWAY                                  */
#define ESP32_POE                                413  /* OLIMEX ESP32-PoE                                      */
#define ESP32_POE_ISO                            414  /* OLIMEX ESP32-PoE-ISO                                  */
#define ESP32_THING                              415  /* SparkFun ESP32 Thing                                  */
#define ESP32_THING_PLUS                         416  /* SparkFun ESP32 Thing Plus                             */
#define ESP32_WROVER_KIT                         417  /* ESP32 Wrover Kit (all versions)                       */
#define ESP320                                   418  /* Electronic SweetPeas - ESP320                         */
#define ESP32C3_DEV                              419  /* ESP32C3 Dev Module                                    */
#define ESP32S2_DEV                              420  /* ESP32S2 Dev Module                                    */
#define ESP32S2_THING_PLUS                       421  /* SparkFun ESP32-S2 Thing Plus                          */
#define ESP32S2_USB                              422  /* ESP32S2 Native USB                                    */
#define ESP32VN_IOT_UNO                          423  /* ESP32vn IoT Uno                                       */
#define ESPEA32                                  424  /* ESPea32                                               */
#define ESPECTRO32                               425  /* ESPectro32                                            */
#define ESPINO32                                 426  /* ThaiEasyElec's ESPino32                               */
#define FEATHER_ESP32                            427  /* Adafruit ESP32 Feather                                */
#define FEATHER_S2                               428  /* UM FeatherS2                                          */
#define FEATHER_S2_NEO                           429  /* UM FeatherS2 Neo                                      */
#define FM_DEV_KIT                               430  /* ESP32 FM DevKit                                       */
#define FRANZININHO_WIFI                         431  /* Franzininho WiFi                                      */
#define FRANZININHO_WIFI_MSC                     432  /* Franzininho WiFi MSC                                  */
#define FROG_ESP32                               433  /* Frog Board ESP32                                      */
#define FUNHOUSE_ESP32S2                         434  /* Adafruit FunHouse                                     */
#define HEALTHYPI_4                              435  /* ProtoCentral HealthyPi 4                              */
#define HELTEC_WIFI_KIT_32                       436  /* Heltec WiFi Kit 32                                    */
#define HELTEC_WIFI_LORA_32                      437  /* Heltec WiFi LoRa 32                                   */
#define HELTEC_WIFI_LORA_32_V2                   438  /* Heltec WiFi LoRa 32(V2)                               */
#define HELTEC_WIRELESS_STICK                    439  /* Heltec Wireless Stick                                 */
#define HELTEC_WIRELESS_STICK_LITE               440  /* Heltec Wireless Stick Lite                            */
#define HONEY_LEMON                              441  /* HONEYLemon                                            */
#define HORNBILL_ESP32_DEV                       442  /* Hornbill ESP32 Dev                                    */
#define HORNBILL_ESP32_MINIMA                    443  /* Hornbill ESP32 Minima                                 */
#define IMBRIOS_LOGSENS_V1P1                     444  /* IMBRIOS LOGSENS_V1P1                                  */
#define INTOROBOT_ESP32_DEV                      445  /* IntoRobot Fig                                         */
#define LOLIN_D32                                446  /* LOLIN D32                                             */
#define LOLIN_D32_PRO                            447  /* LOLIN D32 PRO                                         */
#define LOLIN32                                  448  /* WEMOS LOLIN32                                         */
#define LOLIN32_LITE                             449  /* WEMOS LOLIN32 Lite                                    */
#define LOPY                                     450  /* LoPy                                                  */
#define LOPY4                                    451  /* LoPy4                                                 */
#define M5STACK_ATOM                             452  /* M5Stack-ATOM                                          */
#define M5STACK_CORE_ESP32                       453  /* M5Stack-Core-ESP32                                    */
#define M5STACK_CORE2                            454  /* M5Stack-Core2                                         */
#define M5STACK_CORE_INK                         455  /* M5Stack-CoreInk                                       */
#define M5STACK_FIRE                             456  /* M5Stack-FIRE                                          */
#define M5STACK_C                                457  /* M5Stick-C                                             */
#define MAG_TAG29_ESP32_S2                       458  /* Adafruit MagTag 2.9                                   */
#define METRO_ESP32                              459  /* Metro ESP-32                                          */
#define METRO_ESP32_S2                           460  /* Adafruit Metro ESP32-S2                               */
#define MGBOT_IOTIK32A                           461  /* MGBOT IOTIK 32A                                       */
#define MGBOT_IOTIK32B                           462  /* MGBOT IOTIK 32B                                       */
#define MH_ET_LIVE_ESP32_DEV_KIT                 463  /* MH ET LIVE ESP32DevKIT                                */
#define MH_ET_LIVE_ESP32_MINI_KIT                464  /* MH ET LIVE ESP32MiniKit                               */
#define MICRO_S2                                 465  /* microS2                                               */
#define NANO32                                   466  /* Nano32                                                */
#define NODE_32S                                 467  /* Node32s                                               */
#define NODE_MCU_32S                             468  /* NodeMCU-32S                                           */
#define ODROID_ESP32                             469  /* ODROID ESP32                                          */
#define ONEHORSE_ESP32_DEV                       470  /* Onehorse ESP32 Dev Module                             */
#define OPEN_KB                                  471  /* INEX OpenKB                                           */
#define OROCA_EDUBOT                             472  /* OROCA EduBot                                          */
#define PIRANHA                                  473  /* Piranha ESP-32                                        */
#define PYCOM_GPY                                474  /* Pycom GPy                                             */
#define NODUINO_QUANTUM                          475  /* Noduino Quantum                                       */
#define SENSES_IOT_WEIZEN                        476  /* Senses's WEIZEN                                       */
#define T_BEAM                                   477  /* T-Beam                                                */
#define TINY_PICO                                478  /* UM TinyPICO                                           */
#define TINY_S2                                  479  /* UM TinyS2                                             */
#define TRUEVERIT_ESP32_UNIVERSAL_IOT_DRIVER     480  /* Trueverit ESP32 Universal IoT Driver                  */
#define TRUEVERIT_ESP32_UNIVERSAL_IOT_DRIVER_MK2 481  /* Trueverit ESP32 Universal IoT Driver MK II            */
#define TTGO_LORA32_V1                           482  /* TTGO LoRa32-OLED V1                                   */
#define TTGO_LORA32_V21_NEW                      483  /* TTGO LoRa32-OLED v2.1.6                               */
#define TTGO_T1                                  484  /* TTGO T1                                               */
#define TTGO_T7_V13_MINI_32                      485  /* TTGO T7 V1.3 Mini32                                   */
#define TTGO_T7_V14_MINI_32                      486  /* TTGO T7 V1.4 Mini32                                   */
#define TWATCH                                   487  /* TTGO T-Watch                                          */
#define UBLOX_NINA_W10                           488  /* u-blox NINA-W10 series (ESP32)                        */
#define UPESY_WROOM                              489  /* uPesy ESP32 Wroom DevKit                              */
#define UPESY_WROVER                             490  /* uPesy ESP32 Wrover DevKit                             */
#define WESP32                                   491  /* Silicognition wESP32                                  */
#define WIDORA_AIR                               492  /* Widora AIR                                            */
#define WIFIDUINO_32                             493  /* WiFiduino32                                           */
#define WIPY3                                    494  /* WiPy 3.0                                              */
#define POCKET_32                                495  /* Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery */
#define ESP32_PICO                               496  /* ESP32_PICO ( three kinds of board)                    */
#define ESP32_DEV                                497  /* ESP32 Dev Modules (eleven kinds of board)             */


#define SERIAL_TYPE_NORMAL 0
#define SERIAL_TYPE_MKR    1
#define SERIAL_TYPE_AVR    2

#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_NORMAL
#define NO_NETWORK     0
#define ETHERNET_W5XXX 1
#define WIFI_NORMAL    2
#define WIFI_NINA      3
#define EMBEDED_NETWORK NO_NETWORK

/* AVR系統 */

/*
 * Yun
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 20
 * MAX_ANALOG         : 12
 * PMW                : D3,D5,D6,D9,D10,D11,D12,D13
 * I2C SDA            : D2
 * I2C SCL            : D3
 * SPI MOSI           : なし
 * SPI MISO           : なし
 * SPI SCK            : なし
 * SPI SS             : なし
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : 不明(暫定値 true)
 */
#if defined( ARDUINO_AVR_YUN ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_YUN
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "ARDUINO Yun"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,10,11,12,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define ONBOARD_LED 13
#define SERIAL_RESET true
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_AVR
#endif /* Arduino Yun */

/*
 * UNO (Rev.3をベースに定義しています)
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 20
 * MAX_ANALOG         : 6
 * PMW                : D3,D5,D6,D9,D10,D11
 * I2C SDA            : A4
 * I2C SCL            : A5
 * SPI MOSI           : D11
 * SPI MISO           : D12
 * SPI SCK            : D13
 * SPI SS             : D10
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : true
 */
#if defined( ARDUINO_AVR_UNO ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_UNO
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO UNO"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 6
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Uno */

/*
 * Duemilanove
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 14
 * MAX_ANALOG         : 6
 * PMW                : D3,D5,D6,D9,D10,D11
 * I2C SDA            : A4
 * I2C SCL            : A5
 * SPI MOSI           : D11
 * SPI MISO           : D12
 * SPI SCK            : D13
 * SPI SS             : D10
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : true
 */
#if defined( ARDUINO_AVR_DUEMILANOVE ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_DUEMILANOVE_328P
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO Duemilanove 328P"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 14
#define MAX_ANALOG 6
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Duemilanove or Diecimila 328P */

#if defined( ARDUINO_AVR_DUEMILANOVE ) && defined( __AVR_ATmega168__ )
#define HARDWARE_TYPE ARDUINO_DUEMILANOVE_168
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega168
#define HARDWARE_NAME "ARDUINO Duemilanove 168"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 14
#define MAX_ANALOG 6
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Duemilanove or Diecimila 168 */

/*
 * Nano
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 8
 * PMW         : D3,D5,D6,D9,D10,D12 → D3,D5,D6,D9,D10,D11
 * I2C SDA     : A4
 * I2C SCL     : A5
 * SPI MOSI    : D11
 * SPI MISO    : D12
 * SPI SCK     : D13
 * SPI SS      : D10
 * 内蔵LED     : なし → D13
 */
#if defined( ARDUINO_AVR_NANO ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_NANO_328P
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO Nano 328P"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Nano 328P */

#if defined( ARDUINO_AVR_NANO ) && defined( __AVR_ATmega168__ )
#define HARDWARE_TYPE ARDUINO_NANO_168
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega168
#define HARDWARE_NAME "ARDUINO Nano 168"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Nano 168 */

/*
 * Mega (Rev.3をベースに定義しています)
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 4
 * MAX_DIGITAL        : 54
 * MAX_ANALOG         : 16
 * PMW                : D2 - D13, D44 - D46
 * I2C SDA            : D20
 * I2C SCL            : D21
 * SPI MOSI           : D51
 * SPI MISO           : D50
 * SPI SCK            : D52
 * SPI SS             : D53
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : true
 */
#if defined( ARDUINO_AVR_MEGA2560 ) && defined( __AVR_ATmega2560__ )
#define HARDWARE_TYPE ARDUINO_MEGA2560
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega2560
#define HARDWARE_NAME "ARDUINO MEGA 2560"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 4
#define MAX_DIGITAL 54
#define MAX_ANALOG 16
#define PMW_PORTS {2,3,4,5,6,7,8,9,10,11,12,13,44,45,46}
#define I2C_SDA 20
#define I2C_SCL 21
#define SPI_MOSI 51
#define SPI_MISO 50
#define SPI_SCK 52
#define SPI_SS 53
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Mega 2560 */

#if defined( ARDUINO_AVR_MEGA ) && defined( __AVR_ATmega1280__ )
#define HARDWARE_TYPE ARDUINO_MEGA
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega1280
#define HARDWARE_NAME "ARDUINO MEGA 1280"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 4
#define MAX_DIGITAL 54
#define MAX_ANALOG 16
#define PMW_PORTS {2,3,4,5,6,7,8,9,10,11,12,13,44,45,46}
#define I2C_SDA 20
#define I2C_SCL 21
#define SPI_MOSI 51
#define SPI_MISO 50
#define SPI_SCK 52
#define SPI_SS 53
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Mega */

#if defined( ARDUINO_AVR_ADK ) && defined( __AVR_ATmega2560__ )
#define HARDWARE_TYPE ARDUINO_MEGA_ADK
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega2560
#define HARDWARE_NAME "ARDUINO ADK"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 4
#define MAX_DIGITAL 54
#define MAX_ANALOG 16
#define PMW_PORTS {2,3,4,5,6,7,8,9,10,11,12,13,44,45,46}
#define I2C_SDA 20
#define I2C_SCL 21
#define SPI_MOSI 51
#define SPI_MISO 50
#define SPI_SCK 52
#define SPI_SS 53
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Mega ADK */

/*
 * Leonardo
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 20
 * MAX_ANALOG         : 12
 * PMW                : D3,D5,D6,D9-D13
 * I2C SDA            : D2
 * I2C SCL            : D3
 * SPI MOSI           : SPIは他のピンとのかぶりはなし
 * SPI MISO           : SPIは他のピンとのかぶりはなし
 * SPI SCK            : SPIは他のピンとのかぶりはなし
 * SPI SS             : SPIは他のピンとのかぶりはなし
 * 内蔵LED            : SPIは他のピンとのかぶりはなし
 * IDEのシリアルコンソールでリセットするか : false
 */
#if defined( ARDUINO_AVR_LEONARDO ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_LEONARDO
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "ARDUINO Leonardo"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define ONBOARD_LED 13
#define SERIAL_RESET false
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_AVR
#endif /* Arduino Leonardo */

#if defined( ARDUINO_AVR_LEONARDO_ETH ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_LEONARDO_ETH
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "ARDUINO Leonardo Ethernet"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define ONBOARD_LED 13
#define SERIAL_RESET false
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_AVR
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK ETHERNET_W5XXX
#endif /* Arduino Leonardo ETH */

/*
 * Micro
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 14
 * MAX_ANALOG         : 12
 * PMW                : D3,D5,D6,D9,D10,D11,D12,D13
 * I2C SDA            : D2
 * I2C SCL            : D3
 * SPI MOSI           : なし
 * SPI MISO           : なし
 * SPI SCK            : なし
 * SPI SS             : なし
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : 不明 (暫定値 true)
 */
#if defined( ARDUINO_AVR_MICRO ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_MICRO
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "ARDUINO Micro"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 14
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,10,11,12,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define ONBOARD_LED 13
#define SERIAL_RESET true
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_AVR
#endif /* Arduino Micro */

/*
 * Esplora
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 9
 * MAX_ANALOG         : 1
 * PMW                : D3,D5,D6,D9,D10,D11
 * I2C SDA            : 不明
 * I2C SCL            : D11
 * SPI MOSI           : D16
 * SPI MISO           : D14
 * SPI SCK            : D15
 * SPI SS             : なし
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : 不明(暫定値 true)
 */
#if defined( ARDUINO_AVR_ESPLORA ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_ESPLORA
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "ARDUINO Esplora"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 9
#define MAX_ANALOG 1
#define PMW_PORTS {3,5,6,9,10,11}
/* #define I2C_SDA 不明 */
#define I2C_SCL 1
#define SPI_MOSI 16
#define SPI_MISO 14
#define SPI_SCK 15
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Esplora */

/*
 * Mini
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 4
 * MAX_DIGITAL        : 20
 * MAX_ANALOG         : 8
 * PMW                : D3,D5,D6,D9,D10,D12
 * I2C SDA            : A4
 * I2C SCL            : A5
 * SPI MOSI           : D11
 * SPI MISO           : D12
 * SPI SCK            : D13
 * SPI SS             : D10
 * 内蔵LED            : 不明 (暫定値 なし=-1)
 * IDEのシリアルコンソールでリセットするか : 不明 (暫定値 true)
 */
#if defined( ARDUINO_AVR_MINI ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_MINI_328P
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO MINI 328P"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,10,12}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define SERIAL_RESET true
#endif /* Arduino Mini 328P */

#if defined( ARDUINO_AVR_MINI ) && defined( __AVR_ATmega168__ )
#define HARDWARE_TYPE ARDUINO_MINI_168
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega168
#define HARDWARE_NAME "ARDUINO MINI 168"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,10,12}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define SERIAL_RESET true
#endif /* Arduino Mini 168 */

/*
 * Arduino Ethernet
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 20
 * MAX_ANALOG         : 6
 * PMW                : D3,D5,D6,D9,D10,D11
 * I2C SDA            : A4
 * I2C SCL            : A5
 * SPI MOSI           : D11
 * SPI MISO           : D12
 * SPI SCK            : D13
 * SPI SS             : D10
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : 不明 (暫定値 true)
 */
#if defined( ARDUINO_AVR_ETHERNET ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_ETHERNET
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO Ethernet"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 6
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK ETHERNET_W5XXX
#endif /* Arduino Ethernet */

/*
 * Fio
 * 動作電圧(VDD)      : 3.3V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 20
 * MAX_ANALOG         : 8
 * PMW                : D3,D5,D6,D9,D11,D13
 * I2C SDA            : A4
 * I2C SCL            : A5
 * SPI MOSI           : D11
 * SPI MISO           : D12
 * SPI SCK            : D10
 * SPI SS             : D13
 * 内蔵LED            : なし?
 * IDEのシリアルコンソールでリセットするか : 不明 (暫定値 true)
 */
#if defined( ARDUINO_AVR_FIO ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_FIO
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO Fio"
#define HARDWARE_VDD 33
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,11,13}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 10
#define SPI_SS 13
#define SERIAL_RESET true
#endif /* Arduino Fio */

/*
 * Arduino BT (ATmega328P/ATmega168)
 * 動作電圧(VDD)      : 5V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 20
 * MAX_ANALOG         : 6
 * PMW                : D3,D5,D6,D9,D10,D11
 * I2C SDA            : A4
 * I2C SCL            : A5
 * SPI MOSI           : D11
 * SPI MISO           : D12
 * SPI SCK            : D13
 * SPI SS             : D10
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : 不明 (暫定値 true)
 * Bluetoothモジュールのリセット端子 : D7 (不明確)
 */
#if defined( ARDUINO_AVR_BT ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_BT_328P
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO BT 328P"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 6
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#define PERIPHERAL_RESET 7
#endif /* Arduino BT 328P */

#if defined( ARDUINO_AVR_BT ) && defined( __AVR_ATmega168__ )
#define HARDWARE_TYPE ARDUINO_BT_168
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega168
#define HARDWARE_NAME "ARDUINO BT 168"
#define HARDWARE_VDD 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 6
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#define PERIPHERAL_RESET 7
#endif /* Arduino BT 168 */

/* LilyPad Arduino USB */

#if defined( ARDUINO_AVR_LILYPAD_USB ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_LILYPAD_USB
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "LilyPad Arduino USB"
#endif /* LilyPad Arduino USB */

#if defined( ARDUINO_AVR_LILYPAD ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_LILYPAD_328P
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "LilyPad Arduino 328P"
#endif /* LilyPad Arduino 328P */

#if defined( ARDUINO_AVR_LILYPAD ) && defined( __AVR_ATmega168__ )
#define HARDWARE_TYPE ARDUINO_LILYPAD_168
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega168
#define HARDWARE_NAME "LilyPad Arduino 168"
#endif /* LilyPad Arduino 168 */

#if defined( ARDUINO_AVR_NG ) && defined( __AVR_ATmega168__ )
#define HARDWARE_TYPE ARDUINO_NG_168
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega168
#define HARDWARE_NAME "Arduino NG or older 168"
#endif /* Arduino NG or older 168 */

#if defined( ARDUINO_AVR_NG ) && defined( __AVR_ATmega8__ )
#define HARDWARE_TYPE ARDUINO_NG_8
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega8
#define HARDWARE_NAME "Arduino NG or older 8"
#endif /* Arduino NG or older 8 */

#if defined( ARDUINO_AVR_ROBOT_CONTROL ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_ROBOT_CONTROL
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "Arduino Robot Control"
#endif /* Arduino Robot Control */

#if defined( ARDUINO_AVR_ROBOT_MOTOR ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_ROBOT_MOTOR
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "Arduino Robot Motor"
#endif /* Arduino Robot Motor */

/*
 * Arduino Gemma
 * 動作電圧(VDD)      : 3.3V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 3
 * MAX_ANALOG         : 3
 * PMW                : D0, D1
 * I2C SDA            : D0
 * I2C SCL            : D2
 * SPI MOSI           : D1
 * SPI MISO           : D0
 * SPI SCK            : D2
 * SPI SS             : なし
 * 内蔵LED            : D1
 * IDEのシリアルコンソールでリセットするか : 不明 (暫定値 true)
 */
#if defined( ARDUINO_AVR_GEMMA ) && defined( __AVR_ATtimy85__ )
#define HARDWARE_TYPE ARDUINO_GEMMA
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATtimy85
#define HARDWARE_NAME "ARDUINO Gemma"
#define HARDWARE_VDD 33
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 3
#define MAX_ANALOG 3
#define PMW_PORTS {0, 1}
#define I2C_SDA 0
#define I2C_SCL 2
#define SPI_MOSI 1
#define SPI_MISO 0
#define SPI_SCK 2
#define ONBOARD_LED 1
#define SERIAL_RESET true
#endif /* Arduino Gemma */

#if defined( ARDUINO_AVR_CIRCUITPLAY ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_CIRCUIT_PLAY
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "Adafruit Circuit Playground"
#endif /* Adafruit Circuit Playground */

#if defined( ARDUINO_AVR_YUNMINI ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_YUN_MINI
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "Arduino Yun Mini"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_AVR
#endif /* Arduino Yun Mini */

#if defined( ARDUINO_AVR_INDUSTRIAL101 ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_INDUSTRIAL101
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "Arduino Industrial 101"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_AVR
#endif /* Arduino Industrial 101 */

#if defined( ARDUINO_AVR_LININO_ONE ) && defined( __AVR_ATmega32U4__ )
#define HARDWARE_TYPE ARDUINO_LININO_ONE
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega32U4
#define HARDWARE_NAME "Linino One"
#endif /* Linino One */

#if defined( ARDUINO_AVR_UNO_WIFI_DEV_ED ) && defined( __AVR_ATmega328P__ )
#define HARDWARE_TYPE ARDUINO_UNO_WIFI_DEV_ED
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "Arduino Uno WiFi"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NINA
#endif /* Arduino Uno WiFi */

/*
 * Pro/Pro Mini (proとprominiは自動で識別できないので，pro miniにあわせる)
 * 動作電圧    : 3.3と5と両方ある
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 8
 * PMW         : D3,D5,D6,D9,D10,D11
 * I2C SDA     : A4
 * I2C SCL     : A5
 * SPI MOSI    : D11
 * SPI MISO    : D12
 * SPI SCK     : D13
 * SPI SS      : D10
 * 内蔵LED     : D13
 * IDEのシリアルコンソールでリセットするか : 不明 (暫定値 true)
 */
#if defined( ARDUINO_AVR_PRO ) && defined( __AVR_ATmega328P__ ) && F_CPU==16000000L
#define HARDWARE_TYPE ARDUINO_PRO_328P_5V
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO Pro mini 328P 5V"
#define HARDWARE_VOLTAGE 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Pro or Pro Mini 328P 5V */

#if defined( ARDUINO_AVR_PRO ) && defined( __AVR_ATmega328P__ ) && F_CPU==8000000L
#define HARDWARE_TYPE ARDUINO_PRO_328P_3_3V
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega328P
#define HARDWARE_NAME "ARDUINO Pro mini 328P 3.3V"
#define HARDWARE_VOLTAGE 33
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Pro or Pro Mini 328P 3.3V */

#if defined( ARDUINO_AVR_PRO ) && defined( __AVR_ATmega168__ ) && F_CPU==16000000L
#define HARDWARE_TYPE ARDUINO_PRO_168_5V
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega168
#define HARDWARE_NAME "ARDUINO Pro mini 168 5V"
#define HARDWARE_VOLTAGE 50
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Pro or Pro Mini 168 5V */

#if defined( ARDUINO_AVR_PRO ) && defined( __AVR_ATmega168__ ) && F_CPU==8000000L
#define HARDWARE_TYPE ARDUINO_PRO_168_3_3V
#define CPU_ARCH AVR_ARCH
#define CPU_TYPE TYPE_ATmega168
#define HARDWARE_NAME "ARDUINO Pro mini 168 3.3V"
#define HARDWARE_VOLTAGE 33
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* Arduino Pro or Pro Mini 168 3.3V */

/*  SAM系統  */
/*
 * Due
 * 動作電圧(VDD)      : 3.3V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 4
 * MAX_DIGITAL        : 71
 * MAX_ANALOG         : 12
 * PMW                : D2 - D13
 * I2C SDA            : D20 + D70
 * I2C SCL            : D21 + D71
 * SPI MOSI           : なし
 * SPI MISO           : なし
 * SPI SCK            : なし
 * SPI SS             : なし
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : false
 */
#if defined( ARDUINO_SAM_DUE ) && defined( __SAM3X8E__ )
#define HARDWARE_TYPE ARDUINO_DUE
#define CPU_ARCH SAM_ARCH
#define CPU_TYPE TYPE_SAM3X8E
#define HARDWARE_NAME "ARDUINO Due"
#define HARDWARE_VDD 3.3
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 4
#define MAX_DIGITAL 71
#define MAX_ANALOG 12
#define PMW_PORTS {2,3,4,5,6,7,8,9,10,11,12,13}
#define I2C_SDA 70
#define I2C_SCL 71
#define ONBOARD_LED 13
#define SERIAL_RESET false
#endif /* Arduino Due */

/*  SAMD系統  */
#if defined( ARDUINO_SAMD_ZERO ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_ZERO
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino Zero"
#endif /* Arduino Zero */

#if defined( ARDUINO_SAMD_MKR1000 ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKR1000
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKR1000"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#endif /* Arduino MKR1000 */

#if defined( ARDUINO_SAMD_MKRZERO ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKRZERO
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKRZero"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#endif /* Arduino MKRZero */

#if defined( ARDUINO_SAMD_MKRWIFI1010 ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKRWIFI1010
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKR WiFi 1010"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NINA
#endif /* Arduino MKR WiFi 1010 */

#if defined( ARDUINO_SAMD_NANO_33_IOT ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_NANO_33_IOT
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino NANO 33 IoT"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NINA
#endif /* Arduino NANO 33 IoT */

#if defined( ARDUINO_SAMD_MKRFox1200 ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKRFOX1200
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKR FOX 1200"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#endif /* Arduino MKR FOX 1200 */

#if defined( ARDUINO_SAMD_MKRWAN1300 ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKRWAN1300
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKR WAN 1300"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#endif /* Arduino MKR WAN 1300 */

#if defined( ARDUINO_SAMD_MKRWAN1310 ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKRWAN1310
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKR WAN 1310"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#endif /* Arduino MKR WAN 1310 */

#if defined( ARDUINO_SAMD_MKRGSM1400 ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKRGSM1400
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKR GSM 1400"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#endif /* Arduino MKR GSM 1400 */

#if defined( ARDUINO_SAMD_MKRNB1500 ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKRNB1500
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKR NB 1500"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#endif /* Arduino MKR NB 1500 */

#if defined( ARDUINO_SAMD_MKRVIDOR4000 ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_MKRVIDOR4000
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino MKR Vidor 4000"
#undef HARDWARE_SERIAL_TYPE
#define HARDWARE_SERIAL_TYPE	SERIAL_TYPE_MKR
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NINA
#endif /* Arduino MKR Vidor 4000 */

#if defined( ARDUINO_SAMD_CIRCUITPLAYGROUND_EXPRESS ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_CIRCUITPLAYGROUND_EXPRESS
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Adafruit Circuit Playground M0"
#endif /* Adafruit Circuit Playground M0 */

#if defined( ARDUINO_SAMD_TIAN ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_TIAN
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "Arduino Tian"
#endif /* Arduino Tian */

/*
 * M0/M0 Pro
 * 動作電圧(VDD)      : 3.3V
 * アナログ端子の電圧 : VDDと同じ
 * MAX_SERIAL         : 1
 * MAX_DIGITAL        : 16
 * MAX_ANALOG         : 6
 * PMW                : D2-D13
 * I2C SDA            : D20
 * I2C SCL            : D21
 * SPI MOSI           : D11
 * SPI MISO           : D12
 * SPI SCK            : D13
 * SPI SS             : D10
 * 内蔵LED            : D13
 * IDEのシリアルコンソールでリセットするか : false
 */
#if defined( ARDUINO_SAM_ZERO ) && defined( __SAMD21G18A__ )
#define HARDWARE_TYPE ARDUINO_M0
#define CPU_ARCH SAMD_ARCH
#define CPU_TYPE TYPE_SAMD21G18A
#define HARDWARE_NAME "ARDUINO M0/M0 Pro"
#define HARDWARE_VDD 33
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 16
#define MAX_ANALOG 6
#define PMW_PORTS {2,3,4,5,6,7,8,9,10,11,12,13}
#define I2C_SDA 20
#define I2C_SCL 21
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED 13
#define SERIAL_RESET false
#endif /* Arduino M0 / M0 Pro */



/*  Amperka WiFi Slot  */
#ifdef 	ARDUINO_AMPERKA_WIFI_SLOT
#define HARDWARE_TYPE AMPERKA_WIFI_SLOT
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Amperka WiFi Slot"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Amperka WiFi Slot  */

/*  Adafruit Feather HUZZAH ESP8266  */
#ifdef 	ARDUINO_ESP8266_ADAFRUIT_HUZZAH
#define HARDWARE_TYPE ESP8266_ADAFRUIT_HUZZAH
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Adafruit Feather HUZZAH ESP8266"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Adafruit Feather HUZZAH ESP8266  */

/*  Lifely Agrumino Lemon v4  */
#ifdef 	ARDUINO_ESP8266_AGRUMINO_LEMON_V4
#define HARDWARE_TYPE ESP8266_AGRUMINO_LEMON_V4
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Lifely Agrumino Lemon v4"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Lifely Agrumino Lemon v4  */

/*  Generic ESP8285 Module  */
#ifdef 	ARDUINO_ESP8266_ESP01
#define HARDWARE_TYPE ESP8285_GENERIC
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Generic ESP8285 Module"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Generic ESP8285 Module  */

/*  DOIT ESP-Mx DevKit (ESP8285)  */
#if defined(ARDUINO_ESP8266_ESP01) && LED_BUILTIN==16
#define HARDWARE_TYPE DOIT_ESP_MX_DEV_KIT
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "DOIT ESP-Mx DevKit (ESP8285)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  DOIT ESP-Mx DevKit (ESP8285)  */

/*  ESPDuino (ESP-13 Module)  */
#ifdef 	ARDUINO_ESP8266_ESP13
#define HARDWARE_TYPE ESP8266_ESPDUINO
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "ESPDuino (ESP-13 Module)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  ESPDuino (ESP-13 Module)  */

/*  SweetPea ESP-210  */
#ifdef 	ARDUINO_ESP8266_ESP210
#define HARDWARE_TYPE ESP8266_ESP210
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "SweetPea ESP-210"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  SweetPea ESP-210  */

/*  ESPectro Core  */
#ifdef 	ARDUINO_ESP8266_ESPECTRO_CORE
#define HARDWARE_TYPE ESP8266_ESPECTRO_CORE
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "ESPectro Core"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  ESPectro Core  */

/*  ESPino (ESP-12 Module)  */
#ifdef 	ARDUINO_ESP8266_ESPINO_ESP12
#define HARDWARE_TYPE ESP8266_ESPINO_ESP12
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "ESPino (ESP-12 Module)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  ESPino (ESP-12 Module)  */

/*  ThaiEasyElec's ESPino  */
#ifdef 	ARDUINO_ESP8266_ESPINO_ESP13
#define HARDWARE_TYPE ESP8266_ESPINO_ESP13
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "ThaiEasyElec's ESPino"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  ThaiEasyElec's ESPino  */

/*  ESPresso Lite 1.0  */
#ifdef 	ARDUINO_ESP8266_ESPRESSO_LITE_V1
#define HARDWARE_TYPE ESP8266_ESPRESSO_LITE_V1
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "ESPresso Lite 1.0"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  ESPresso Lite 1.0  */

/*  ESPresso Lite 2.0  */
#ifdef 	ARDUINO_ESP8266_ESPRESSO_LITE_V2
#define HARDWARE_TYPE ESP8266_ESPRESSO_LITE_V2
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "ESPresso Lite 2.0"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  ESPresso Lite 2.0  */

/*  Generic ESP8266 Module  */
#ifdef 	ARDUINO_ESP8266_GENERIC
#define HARDWARE_TYPE ESP8266_GENERIC
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Generic ESP8266 Module"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Generic ESP8266 Module  */

/*  Invent One  */
#ifdef 	ARDUINO_ESP8266_INVENT_ONE
#define HARDWARE_TYPE ESP8266_INVENT_ONE
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Invent One"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Invent One  */

/*  NodeMCU 0.9 (ESP-12 Module)  */
#ifdef 	ARDUINO_ESP8266_NODEMCU_ESP12
#define HARDWARE_TYPE ESP8266_NODEMCU_ESP12
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "NodeMCU 0.9 (ESP-12 Module)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  NodeMCU 0.9 (ESP-12 Module)  */

/*  NodeMCU 1.0 (ESP-12E Module)  */
#ifdef 	ARDUINO_ESP8266_NODEMCU_ESP12E
#define HARDWARE_TYPE ESP8266_NODEMCU_ESP12E
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "NodeMCU 1.0 (ESP-12E Module)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  NodeMCU 1.0 (ESP-12E Module)  */

/*  Digistump Oak  */
#ifdef 	ARDUINO_ESP8266_OAK
#define HARDWARE_TYPE ESP8266_OAK
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Digistump Oak"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Digistump Oak  */

/*  Phoenix 1.0  */
#ifdef 	ARDUINO_ESP8266_PHOENIX_V1
#define HARDWARE_TYPE ESP8266_PHOENIX_V1
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Phoenix 1.0"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Phoenix 1.0  */

/*  Phoenix 2.0  */
#ifdef 	ARDUINO_ESP8266_PHOENIX_V2
#define HARDWARE_TYPE ESP8266_PHOENIX_V2
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Phoenix 2.0"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Phoenix 2.0  */

/*  Schirmilabs Eduino WiFi  */
#ifdef 	ARDUINO_ESP8266_SCHIRMILABS_EDUINO_WIFI
#define HARDWARE_TYPE ESP8266_SCHIRMILABS_EDUINO_WIFI
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Schirmilabs Eduino WiFi"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Schirmilabs Eduino WiFi  */

/*  SparkFun ESP8266 Thing Dev  */
#ifdef 	ARDUINO_ESP8266_THING_DEV
#define HARDWARE_TYPE ESP8266_THING_DEV
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "SparkFun ESP8266 Thing Dev"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  SparkFun ESP8266 Thing Dev  */

/*  LOLIN(WEMOS) D1 mini Lite  */
#ifdef 	ARDUINO_ESP8266_WEMOS_D1MINILITE
#define HARDWARE_TYPE ESP8266_WEMOS_D1MINILITE
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "LOLIN(WEMOS) D1 mini Lite"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  LOLIN(WEMOS) D1 mini Lite  */

/*  LOLIN(WEMOS) D1 mini Pro  */
#ifdef 	ARDUINO_ESP8266_WEMOS_D1MINIPRO
#define HARDWARE_TYPE ESP8266_WEMOS_D1MINIPRO
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "LOLIN(WEMOS) D1 mini Pro"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  LOLIN(WEMOS) D1 mini Pro  */

/*  LOLIN(WeMos) D1 R1  */
#ifdef 	ARDUINO_ESP8266_WEMOS_D1R1
#define HARDWARE_TYPE ESP8266_WEMOS_D1R1
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "LOLIN(WeMos) D1 R1"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  LOLIN(WeMos) D1 R1  */

/*  XinaBox CW01  */
#ifdef 	ARDUINO_ESP8266_XINABOX_CW01
#define HARDWARE_TYPE ESP8266_XINABOX_CW01
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "XinaBox CW01"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  XinaBox CW01  */

/*  4D Systems gen4 IoD Range  */
#ifdef 	ARDUINO_GEN4_IOD
#define HARDWARE_TYPE ESP8266_GEN4_IOD
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "4D Systems gen4 IoD Range"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  4D Systems gen4 IoD Range  */

/*  Olimex MOD-WIFI-ESP8266(-DEV)  */
#ifdef 	ARDUINO_MOD_WIFI_ESP8266
#define HARDWARE_TYPE MOD_WIFI_ESP8266
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "Olimex MOD-WIFI-ESP8266(-DEV)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  Olimex MOD-WIFI-ESP8266(-DEV)  */

/*  WiFi Kit 8  */
#ifdef 	ARDUINO_wifi_kit_8
#define HARDWARE_TYPE WIFI_KIT_8
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "WiFi Kit 8"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  WiFi Kit 8  */

/*  WiFiduino  */
#ifdef 	ARDUINO_WIFIDUINO_ESP8266
#define HARDWARE_TYPE WIFIDUINO_ESP8266
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "WiFiduino"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  WiFiduino  */

/*  SparkFun ESP8266 Thing / Blynk Board  */
#ifdef 	ARDUINO_ESP8266_THING
#define HARDWARE_TYPE ESP8266_THING
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "SparkFun ESP8266 Thing / Blynk Board"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  SparkFun ESP8266 Thing / Blynk Board  */

/*  LOLIN(WEMOS) D1 R2 & mini / D1 mini (clone)  */
#ifdef 	ARDUINO_ESP8266_WEMOS_D1MINI
#define HARDWARE_TYPE ESP8266_WEMOS_D1MINI
#define CPU_ARCH XTENSA_LX106_ARCH
#define CPU_TYPE TYPE_ESP8266
#define HARDWARE_NAME "LOLIN(WEMOS) D1 R2 & mini / D1 mini (clone)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /*  LOLIN(WEMOS) D1 R2 & mini / D1 mini (clone)  */

/* Adafruit Feather ESP32-S2 (no PSRAM) */
#ifdef ARDUINO_ADAFRUIT_FEATHER_ESP32S2_NOPSRAM
#define HARDWARE_TYPE ADAFRUIT_FEATHER_ESP32S2_NOPSRAM
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Adafruit Feather ESP32-S2 (no PSRAM)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Adafruit Feather ESP32-S2 (no PSRAM) */

/* ALKS ESP32 */
#ifdef ARDUINO_ALKS
#define HARDWARE_TYPE ALKS
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ALKS ESP32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ALKS ESP32 */

/* ATMegaZero ESP32-S2 */
#ifdef ARDUINO_atmegazero_esp32s2
#define HARDWARE_TYPE ATMEGA_ZERO_ESP32_S2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ATMegaZero ESP32-S2"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ATMegaZero ESP32-S2 */

/* BPI-BIT */
#ifdef ARDUINO_BPI_BIT
#define HARDWARE_TYPE BPI_BIT
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "BPI-BIT"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* BPI-BIT */

/* Microduino-CoreESP32 */
#ifdef ARDUINO_CoreESP32
#define HARDWARE_TYPE MICRODUINO_CORE_ESP32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Microduino-CoreESP32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Microduino-CoreESP32 */

/* D-duino-32 */
#ifdef ARDUINO_D_Duino_32
#define HARDWARE_TYPE D_DUINO_32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "D-duino-32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* D-duino-32 */

/* WEMOS D1 MINI ESP32 */
#ifdef ARDUINO_D1_MINI32
#define HARDWARE_TYPE WEMOS_D1_MINI32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "WEMOS D1 MINI ESP32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* WEMOS D1 MINI ESP32 */

/* Deneyap Kart */
#ifdef ARDUINO_DYDK
#define HARDWARE_TYPE DYDK
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Deneyap Kart"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Deneyap Kart */

/* Deneyap Mini */
#ifdef ARDUINO_DYM
#define HARDWARE_TYPE DYM
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Deneyap Mini"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Deneyap Mini */

/* OLIMEX ESP32-DevKit-LiPo */
#ifdef ARDUINO_ESP32_DEVKIT_LIPO
#define HARDWARE_TYPE ESP32_DEVKIT_LIPO
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "OLIMEX ESP32-DevKit-LiPo"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* OLIMEX ESP32-DevKit-LiPo */

/* OLIMEX ESP32-EVB */
#ifdef ARDUINO_ESP32_EVB
#define HARDWARE_TYPE ESP32_EVB
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "OLIMEX ESP32-EVB"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* OLIMEX ESP32-EVB */

/* OLIMEX ESP32-GATEWAY */
#if defined(ARDUINO_ESP32_GATEWAY_C) || defined(ARDUINO_ESP32_GATEWAY_E) || defined(ARDUINO_ESP32_GATEWAY_F)
#define HARDWARE_TYPE ESP32_GATEWAY
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "OLIMEX ESP32-GATEWAY"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* OLIMEX ESP32-GATEWAY */

/* OLIMEX ESP32-PoE */
#ifdef ARDUINO_ESP32_POE
#define HARDWARE_TYPE ESP32_POE
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "OLIMEX ESP32-PoE"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* OLIMEX ESP32-PoE */

/* OLIMEX ESP32-PoE-ISO */
#ifdef ARDUINO_ESP32_POE_ISO
#define HARDWARE_TYPE ESP32_POE_ISO
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "OLIMEX ESP32-PoE-ISO"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* OLIMEX ESP32-PoE-ISO */

/* SparkFun ESP32 Thing */
#ifdef ARDUINO_ESP32_THING
#define HARDWARE_TYPE ESP32_THING
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "SparkFun ESP32 Thing"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* SparkFun ESP32 Thing */

/* SparkFun ESP32 Thing Plus */
#ifdef ARDUINO_ESP32_THING_PLUS
#define HARDWARE_TYPE ESP32_THING_PLUS
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "SparkFun ESP32 Thing Plus"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* SparkFun ESP32 Thing Plus */

/* ESP32 Wrover Kit (all versions) */
#ifdef ARDUINO_ESP32_WROVER_KIT
#define HARDWARE_TYPE ESP32_WROVER_KIT
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESP32 Wrover Kit"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESP32 Wrover Kit (all versions) */

/* Electronic SweetPeas - ESP320 */
#ifdef ARDUINO_ESP320
#define HARDWARE_TYPE ESP320
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Electronic SweetPeas - ESP320"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Electronic SweetPeas - ESP320 */

/* ESP32C3 Dev Module */
#ifdef ARDUINO_ESP32C3_DEV
#define HARDWARE_TYPE ESP32C3_DEV
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESP32C3 Dev Module"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESP32C3 Dev Module */

/* ESP32S2 Dev Module */
#ifdef ARDUINO_ESP32S2_DEV
#define HARDWARE_TYPE ESP32S2_DEV
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESP32S2 Dev Module"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESP32S2 Dev Module */

/* SparkFun ESP32-S2 Thing Plus */
#ifdef ARDUINO_ESP32S2_THING_PLUS
#define HARDWARE_TYPE ESP32S2_THING_PLUS
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "SparkFun ESP32-S2 Thing Plus"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* SparkFun ESP32-S2 Thing Plus */

/* ESP32S2 Native USB */
#ifdef ARDUINO_ESP32S2_USB
#define HARDWARE_TYPE ESP32S2_USB
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESP32S2 Native USB"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESP32S2 Native USB */

/* ESP32vn IoT Uno */
#ifdef ARDUINO_esp32vn_iot_uno
#define HARDWARE_TYPE ESP32VN_IOT_UNO
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESP32vn IoT Uno"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESP32vn IoT Uno */

/* ESPea32 */
#ifdef ARDUINO_ESPea32
#define HARDWARE_TYPE ESPEA32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESPea32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESPea32 */

/* ESPectro32 */
#ifdef ARDUINO_ESPECTRO32
#define HARDWARE_TYPE ESPECTRO32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESPectro32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESPectro32 */

/* ThaiEasyElec's ESPino32 */
#ifdef ARDUINO_ESPino32
#define HARDWARE_TYPE ESPINO32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ThaiEasyElec ESPino32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ThaiEasyElec's ESPino32 */

/* Adafruit ESP32 Feather */
#ifdef ARDUINO_FEATHER_ESP32
#define HARDWARE_TYPE FEATHER_ESP32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Adafruit ESP32 Feather"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Adafruit ESP32 Feather */

/* UM FeatherS2 */
#ifdef ARDUINO_FEATHERS2
#define HARDWARE_TYPE FEATHER_S2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "UM FeatherS2"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* UM FeatherS2 */

/* UM FeatherS2 Neo */
#ifdef ARDUINO_FEATHERS2NEO
#define HARDWARE_TYPE FEATHER_S2_NEO
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "UM FeatherS2 Neo"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* UM FeatherS2 Neo */

/* ESP32 FM DevKit */
#ifdef ARDUINO_fm_devkit
#define HARDWARE_TYPE FM_DEV_KIT
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESP32 FM DevKit"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESP32 FM DevKit */

/* Franzininho WiFi */
#ifdef ARDUINO_FRANZININHO_WIFI
#define HARDWARE_TYPE FRANZININHO_WIFI
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Franzininho WiFi"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Franzininho WiFi */

/* Franzininho WiFi MSC */
#ifdef ARDUINO_FRANZININHO_WIFI_MSC
#define HARDWARE_TYPE FRANZININHO_WIFI_MSC
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Franzininho WiFi MSC"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Franzininho WiFi MSC */

/* Frog Board ESP32 */
#ifdef ARDUINO_FROG_ESP32
#define HARDWARE_TYPE FROG_ESP32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Frog Board ESP32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Frog Board ESP32 */

/* Adafruit FunHouse */
#ifdef ARDUINO_FUNHOUSE_ESP32S2
#define HARDWARE_TYPE FUNHOUSE_ESP32S2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Adafruit FunHouse"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Adafruit FunHouse */

/* ProtoCentral HealthyPi 4 */
#ifdef ARDUINO_HEALTHYPI_4
#define HARDWARE_TYPE HEALTHYPI_4
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ProtoCentral HealthyPi 4"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ProtoCentral HealthyPi 4 */

/* Heltec WiFi Kit 32 */
#ifdef ARDUINO_heltec_wifi_kit_32
#define HARDWARE_TYPE HELTEC_WIFI_KIT_32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Heltec WiFi Kit 32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Heltec WiFi Kit 32 */

/* Heltec WiFi LoRa 32 */
#ifdef ARDUINO_heltec_wifi_lora_32
#define HARDWARE_TYPE HELTEC_WIFI_LORA_32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Heltec WiFi LoRa 32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Heltec WiFi LoRa 32 */

/* Heltec WiFi LoRa 32(V2) */
#ifdef ARDUINO_heltec_wifi_lora_32_V2
#define HARDWARE_TYPE HELTEC_WIFI_LORA_32_V2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Heltec WiFi LoRa 32(V2)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Heltec WiFi LoRa 32(V2) */

/* Heltec Wireless Stick */
#ifdef ARDUINO_heltec_wireless_stick
#define HARDWARE_TYPE HELTEC_WIRELESS_STICK
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Heltec Wireless Stick"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Heltec Wireless Stick */

/* Heltec Wireless Stick Lite */
#ifdef ARDUINO_heltec_wireless_stick_LITE
#define HARDWARE_TYPE HELTEC_WIRELESS_STICK_LITE
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Heltec Wireless Stick Lite"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Heltec Wireless Stick Lite */

/* HONEYLemon */
#ifdef ARDUINO_HONEYLEMON
#define HARDWARE_TYPE HONEY_LEMON
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "HONEYLemon"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* HONEYLemon */

/* Hornbill ESP32 Dev */
#ifdef ARDUINO_HORNBILL_ESP32_DEV
#define HARDWARE_TYPE HORNBILL_ESP32_DEV
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Hornbill ESP32 Dev"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Hornbill ESP32 Dev */

/* Hornbill ESP32 Minima */
#ifdef ARDUINO_HORNBILL_ESP32_MINIMA
#define HARDWARE_TYPE HORNBILL_ESP32_MINIMA
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Hornbill ESP32 Minima"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Hornbill ESP32 Minima */

/* IMBRIOS LOGSENS_V1P1 */
#ifdef ARDUINO_IMBRIOS_LOGSENS_V1P1
#define HARDWARE_TYPE IMBRIOS_LOGSENS_V1P1
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "IMBRIOS LOGSENS_V1P1"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* IMBRIOS LOGSENS_V1P1 */

/* IntoRobot Fig */
#ifdef ARDUINO_INTOROBOT_ESP32_DEV
#define HARDWARE_TYPE INTOROBOT_ESP32_DEV
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "IntoRobot Fig"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* IntoRobot Fig */

/* LOLIN D32 */
#ifdef ARDUINO_LOLIN_D32
#define HARDWARE_TYPE LOLIN_D32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "LOLIN D32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* LOLIN D32 */

/* LOLIN D32 PRO */
#ifdef ARDUINO_LOLIN_D32_PRO
#define HARDWARE_TYPE LOLIN_D32_PRO
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "LOLIN D32 PRO"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* LOLIN D32 PRO */

/* WEMOS LOLIN32 */
#ifdef ARDUINO_LOLIN32
#define HARDWARE_TYPE LOLIN32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "WEMOS LOLIN32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* WEMOS LOLIN32 */

/* WEMOS LOLIN32 Lite */
#ifdef ARDUINO_LOLIN32_LITE
#define HARDWARE_TYPE LOLIN32_LITE
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "WEMOS LOLIN32 Lite"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* WEMOS LOLIN32 Lite */

/* LoPy */
#ifdef ARDUINO_LoPy
#define HARDWARE_TYPE LOPY
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "LoPy"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* LoPy */

/* LoPy4 */
#ifdef ARDUINO_LoPy4
#define HARDWARE_TYPE LOPY4
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "LoPy4"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* LoPy4 */

/* M5Stack-ATOM */
#ifdef ARDUINO_M5Stack_ATOM
#define HARDWARE_TYPE M5STACK_ATOM
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "M5Stack-ATOM"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* M5Stack-ATOM */

/* M5Stack-Core-ESP32 */
#ifdef ARDUINO_M5Stack_Core_ESP32
#define HARDWARE_TYPE M5STACK_CORE_ESP32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "M5Stack-Core-ESP32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* M5Stack-Core-ESP32 */

/* M5Stack-Core2 */
#ifdef ARDUINO_M5STACK_Core2
#define HARDWARE_TYPE M5STACK_CORE2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "M5Stack-Core2"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* M5Stack-Core2 */

/* M5Stack-CoreInk */
#ifdef ARDUINO_M5Stack_CoreInk
#define HARDWARE_TYPE M5STACK_CORE_INK
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "M5Stack-CoreInk"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* M5Stack-CoreInk */

/* M5Stack-FIRE */
#ifdef ARDUINO_M5STACK_FIRE
#define HARDWARE_TYPE M5STACK_FIRE
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "M5Stack-FIRE"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* M5Stack-FIRE */

/* M5Stick-C */
#ifdef ARDUINO_M5Stick_C
#define HARDWARE_TYPE M5STACK_C
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "M5Stick-C"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* M5Stick-C */

/* Adafruit MagTag 2.9 */
#ifdef ARDUINO_MAGTAG29_ESP32S2
#define HARDWARE_TYPE MAG_TAG29_ESP32_S2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Adafruit MagTag 2.9"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Adafruit MagTag 2.9 */

/* Metro ESP-32 */
#ifdef ARDUINO_Metro
#define HARDWARE_TYPE METRO_ESP32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Metro ESP-32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Metro ESP-32 */

/* Adafruit Metro ESP32-S2 */
#ifdef ARDUINO_METRO_ESP32S2
#define HARDWARE_TYPE METRO_ESP32_S2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Adafruit Metro ESP32-S2"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Adafruit Metro ESP32-S2 */

/* MGBOT IOTIK 32A */
#ifdef ARDUINO_MGBOT_IOTIK32A
#define HARDWARE_TYPE MGBOT_IOTIK32A
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "MGBOT IOTIK 32A"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* MGBOT IOTIK 32A */

/* MGBOT IOTIK 32B */
#ifdef ARDUINO_MGBOT_IOTIK32B
#define HARDWARE_TYPE MGBOT_IOTIK32B
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "MGBOT IOTIK 32B"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* MGBOT IOTIK 32B */

/* MH ET LIVE ESP32DevKIT */
#ifdef ARDUINO_MH_ET_LIVE_ESP32DEVKIT
#define HARDWARE_TYPE MH_ET_LIVE_ESP32_DEV_KIT
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "MH ET LIVE ESP32DevKIT"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* MH ET LIVE ESP32DevKIT */

/* MH ET LIVE ESP32MiniKit */
#ifdef ARDUINO_MH_ET_LIVE_ESP32MINIKIT
#define HARDWARE_TYPE MH_ET_LIVE_ESP32_MINI_KIT
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "MH ET LIVE ESP32MiniKit"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* MH ET LIVE ESP32MiniKit */

/* microS2 */
#ifdef ARDUINO_MICROS2
#define HARDWARE_TYPE MICRO_S2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "microS2"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* microS2 */

/* Nano32 */
#ifdef ARDUINO_NANO32
#define HARDWARE_TYPE NANO32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Nano32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Nano32 */

/* Node32s */
#ifdef ARDUINO_Node32s
#define HARDWARE_TYPE NODE_32S
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Node32s"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Node32s */

/* NodeMCU-32S */
#ifdef ARDUINO_NodeMCU_32S
#define HARDWARE_TYPE NODE_MCU_32S
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "NodeMCU-32S"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* NodeMCU-32S */

/* ODROID ESP32 */
#ifdef ARDUINO_ODROID_ESP32
#define HARDWARE_TYPE ODROID_ESP32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ODROID ESP32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ODROID ESP32 */

/* Onehorse ESP32 Dev Module */
#ifdef ARDUINO_ONEHORSE_ESP32_DEV
#define HARDWARE_TYPE ONEHORSE_ESP32_DEV
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Onehorse ESP32 Dev Module"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Onehorse ESP32 Dev Module */

/* INEX OpenKB */
#ifdef ARDUINO_openkb
#define HARDWARE_TYPE OPEN_KB
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "INEX OpenKB"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* INEX OpenKB */

/* OROCA EduBot */
#ifdef ARDUINO_OROCA_EDUBOT
#define HARDWARE_TYPE OROCA_EDUBOT
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "OROCA EduBot"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* OROCA EduBot */

/* Piranha ESP-32 */
#ifdef ARDUINO_Piranha
#define HARDWARE_TYPE PIRANHA
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Piranha ESP-32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Piranha ESP-32 */

/* Pycom GPy */
#ifdef ARDUINO_PYCOM_GPY
#define HARDWARE_TYPE PYCOM_GPY
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Pycom GPy"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Pycom GPy */

/* Noduino Quantum */
#ifdef ARDUINO_QUANTUM
#define HARDWARE_TYPE NODUINO_QUANTUM
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Noduino Quantum"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Noduino Quantum */

/* Senses's WEIZEN */
#ifdef ARDUINO_sensesiot_weizen
#define HARDWARE_TYPE SENSES_IOT_WEIZEN
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Senses WEIZEN"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Senses's WEIZEN */

/* T-Beam */
#ifdef ARDUINO_TBeam
#define HARDWARE_TYPE T_BEAM
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "T-Beam"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* T-Beam */

/* UM TinyPICO */
#ifdef ARDUINO_TINYPICO
#define HARDWARE_TYPE TINY_PICO
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "UM TinyPICO"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* UM TinyPICO */

/* UM TinyS2 */
#ifdef ARDUINO_TINYS2
#define HARDWARE_TYPE TINY_S2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "UM TinyS2"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* UM TinyS2 */

/* Trueverit ESP32 Universal IoT Driver */
#ifdef ARDUINO_Trueverit_ESP32_Universal_IoT_Driver
#define HARDWARE_TYPE TRUEVERIT_ESP32_UNIVERSAL_IOT_DRIVER
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Trueverit ESP32 Universal IoT Driver"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Trueverit ESP32 Universal IoT Driver */

/* Trueverit ESP32 Universal IoT Driver MK II */
#ifdef ARDUINO_Trueverit_ESP32_Universal_IoT_Driver_MK_II
#define HARDWARE_TYPE TRUEVERIT_ESP32_UNIVERSAL_IOT_DRIVER_MK2
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Trueverit ESP32 Universal IoT Driver MK II"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Trueverit ESP32 Universal IoT Driver MK II */

/* TTGO LoRa32-OLED V1 */
#ifdef ARDUINO_TTGO_LoRa32_V1
#define HARDWARE_TYPE TTGO_LORA32_V1
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "TTGO LoRa32-OLED V1"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* TTGO LoRa32-OLED V1 */

/* TTGO LoRa32-OLED v2.1.6 */
#ifdef ARDUINO_TTGO_LoRa32_v21new
#define HARDWARE_TYPE TTGO_LORA32_V21_NEW
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "TTGO LoRa32-OLED v2.1.6"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* TTGO LoRa32-OLED v2.1.6 */

/* TTGO T1 */
#ifdef ARDUINO_TTGO_T1
#define HARDWARE_TYPE TTGO_T1
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "TTGO T1"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* TTGO T1 */

/* TTGO T7 V1.3 Mini32 */
#ifdef ARDUINO_TTGO_T7_V13_Mini32
#define HARDWARE_TYPE TTGO_T7_V13_MINI_32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "TTGO T7 V1.3 Mini32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* TTGO T7 V1.3 Mini32 */

/* TTGO T7 V1.4 Mini32 */
#ifdef ARDUINO_TTGO_T7_V14_Mini32
#define HARDWARE_TYPE TTGO_T7_V14_MINI_32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "TTGO T7 V1.4 Mini32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* TTGO T7 V1.4 Mini32 */

/* TTGO T-Watch */
#if defined(ARDUINO_TWATCH_BASE) || defined(ARDUINO_TWATCH_2020_V1) ||defined(ARDUINO_TWATCH_2020_V2) || defined(ARDUINO_TWATCH_2020_V3)
#define HARDWARE_TYPE TWATCH
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "TTGO T-Watch"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* TTGO T-Watch */

/* u-blox NINA-W10 series (ESP32) */
#ifdef ARDUINO_UBLOX_NINA_W10
#define HARDWARE_TYPE UBLOX_NINA_W10
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "u-blox NINA-W10 series (ESP32)"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* u-blox NINA-W10 series (ESP32) */

/* uPesy ESP32 Wroom DevKit */
#ifdef ARDUINO_uPesy_WROOM
#define HARDWARE_TYPE UPESY_WROOM
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "uPesy ESP32 Wroom DevKit"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* uPesy ESP32 Wroom DevKit */

/* uPesy ESP32 Wrover DevKit */
#ifdef ARDUINO_uPesy_WROVER
#define HARDWARE_TYPE UPESY_WROVER
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "uPesy ESP32 Wrover DevKit"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* uPesy ESP32 Wrover DevKit */

/* Silicognition wESP32 */
#ifdef ARDUINO_WESP32
#define HARDWARE_TYPE WESP32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Silicognition wESP32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Silicognition wESP32 */

/* Widora AIR */
#ifdef ARDUINO_WIDORA_AIR
#define HARDWARE_TYPE WIDORA_AIR
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Widora AIR"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Widora AIR */

/* WiFiduino32 */
#ifdef ARDUINO_Wifiduino32
#define HARDWARE_TYPE WIFIDUINO_32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "WiFiduino32"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* WiFiduino32 */

/* WiPy 3.0 */
#ifdef ARDUINO_WIPY3
#define HARDWARE_TYPE WIPY3
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "WiPy 3.0"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* WiPy 3.0 */

/* Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery */
#ifdef ARDUINO_Pocket32
#define HARDWARE_TYPE POCKET_32
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery */

/* ESP32_PICO
ESP32 PICO-D4
Turta IoT Node
KITS ESP32 EDU
*/
#ifdef ARDUINO_ESP32_PICO
#define HARDWARE_TYPE ESP32_PICO
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESP32_PICO"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESP32_PICO  */

/* ESP32 Dev Modules
ESP32 Wrover Module / AI Thinker ESP32-CAM
ESP32 Dev Module
S.ODI Ultra v1
MagicBit
XinaBox CW02
SparkFun LoRa Gateway 1-Channel
FireBeetle-ESP32
DOIT ESP32 DEVKIT V1
DOIT ESPduino32
VintLabs ESP32 Devkit
Labplus mPython
*/
#ifdef ARDUINO_ESP32_DEV
#define HARDWARE_TYPE ESP32_DEV
#define CPU_ARCH XTENSA_LX6_ARCH
#define CPU_TYPE TYPE_ESP32
#define HARDWARE_NAME "ESP32 Dev Modules"
#undef  EMBEDED_NETWORK
#define EMBEDED_NETWORK WIFI_NORMAL
#endif /* ESP32 Dev Modules  */



/*
 * 未定義を埋める操作
 */

#define UNKNOWN_VAL -1
#define UNKNOWN_PMW {-1}
#define UNKNOWN_STR ""

#ifndef HARDWARE_NAME
#define HARDWARE_NAME UNKNOWN_STR
#endif /* HARDWARE_NAME */

#ifndef HARDWARE_VDD
#define HARDWARE_VDD UNKNOWN_VAL
#endif /* HARDWARE_VDD */

#ifndef HARDWARE_AREF
#define HARDWARE_AREF UNKNOWN_VAL
#endif /* HARDWARE_AREF */

#ifndef MAX_SERIAL
#define MAX_SERIAL UNKNOWN_VAL
#endif /* MAX_SERIAL */

#ifndef MAX_DIGITAL
#define MAX_DIGITAL UNKNOWN_VAL
#endif /* MAX_DIGITAL */

#ifndef MAX_ANALOG
#define MAX_ANALOG UNKNOWN_VAL
#endif /* MAX_ANALOG */

#ifndef PMW_PORTS
#define PMW_PORTS UNKNOWN_PMW
#endif /* PMW_PORTS */

#ifndef I2C_SDA
#define I2C_SDA UNKNOWN_VAL
#endif /* I2C_SDA */

#ifndef I2C_SCL
#define I2C_SCL UNKNOWN_VAL
#endif /* I2C_SCL */

#ifndef SPI_MOSI
#define SPI_MOSI UNKNOWN_VAL
#endif /* SPI_MOSI */

#ifndef SPI_MISO
#define SPI_MISO UNKNOWN_VAL
#endif /* SPI_MISO */

#ifndef SPI_SCK
#define SPI_SCK UNKNOWN_VAL
#endif /* SPI_SCK */

#ifndef SPI_SS
#define SPI_SS UNKNOWN_VAL
#endif /* SPI_SS */

#ifndef ONBOARD_LED
#define ONBOARD_LED UNKNOWN_VAL
#endif /* ONBOARD_LED */

#ifndef SERIAL_RESET
#define SERIAL_RESET false
#endif /* SERIAL_RESET */

#ifndef PERIPHERAL_RESET
#define PERIPHERAL_RESET UNKNOWN_VAL
#endif /* PERIPHERAL_RESET */


#endif /* __DETECT_ARDUINO_HARDWARE_H__ */
