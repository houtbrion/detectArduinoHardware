#ifndef __DETECT_ARDUINO_HARDWARE_H__
#define __DETECT_ARDUINO_HARDWARE_H__

#include <Arduino.h>
/* AVR系統 */
#define AVR_YUN        1 /* Arduino Yun */
#define AVR_UNO       2 /* Arduino Uno */
#define AVR_DUEMILANOVE_328P    3 /* Arduino Duemilanove */
#define AVR_DUEMILANOVE_168   4
#define AVR_NANO_328P     5 /* Arduino Nano系統 */
#define AVR_NANO_168      6
#define AVR_MEGA2560      7 /* Arduino Mega2560 */
#define AVR_MEGA      8 /* Arduino Mega */
#define AVR_ADK       9 /* Arduino ADK */
#define AVR_LEONARDO      10 /* Arduino Leonardo */
#define AVR_LEONARDO_ETH    11 /* Arduino Leonardo Ethernet */
#define AVR_MICRO     12 /* Arduino Micro */
#define AVR_ESPLORA     13 /* Arduino Esplora */
#define AVR_MINI_328P     14 /* Arduino Mini */
#define AVR_MINI_168      15
#define AVR_ETHERNET      16 /* Arduino Ethernet */
#define AVR_FIO       17 /* Arduino Fio */
#define AVR_BT_328P     18 /* Arduino BT (ATmega328P/ATmega168) */
#define AVR_BT_168      19
#define AVR_LILYPAD_USB     20 /* LilyPad Arduino USB */
#define AVR_LILYPAD_328P    21 /* LilyPad Arduino (ATmega328P/ATmega168) */
#define AVR_LILYPAD_168     22
#define AVR_PRO_328P_5V     23 /* Arduino Pro or Pro Mini */
#define AVR_PRO_328P_3_3V   24
#define AVR_PRO_168_5V      25
#define AVR_PRO_168_3_3V    26
#define AVR_NG_168      27 /* Arduino NG */
#define AVR_NG_8      28
#define AVR_ROBOT_CONTROL   29 /* Arduino Robot Control */
#define AVR_ROBOT_MOTOR     30 /* Arduino Robot Motor */
#define AVR_GEMMA     31 /* Arduino Gemma */
#define AVR_CIRCUITPLAY     32 /* Arduino Circuit play */
#define AVR_YUNMINI     33 /* Arduino Yun Mini */
#define AVR_INDUSTRIAL101   34 /* Arduino Industrial101 */
#define AVR_LININO_ONE      35 /* Arduino Lilino One */
#define AVR_UNO_WIFI_DEV_ED   36 /* Arduino Uno Wifi Developer Edition */

/*  SAM系統  */
#define SAM_DUE       101 /* Arduino Due */

/*  SAMD系統  */
#define SAMD_ZERO     201 /* Arduino Zero */
#define SAMD_MKR1000      202 /* Arduino/Genuino MKR1000 */
#define SAMD_MKRZERO      203 /* Arduino MKRZero */
#define SAMD_MKRFox1200     204 /* Arduino MKRFox1200 */
#define SAMD_MKRGSM1400     205 /* Arduino MKR GSM 1400 */
#define SAMD_MKRWAN1300     206 /* Arduino MKR WAN 1300 */
#define SAMD_MKRWIFI1010    207 /* Arduino MKR WiFi 1010 */
#define SAMD_CIRCUITPLAYGROUND_EXPRESS  208 /* Adafruit Circuit Playground M0 */
#define SAM_ZERO      209 /* M0 pro / M0 */
#define SAMD_TIAN     210 /* Arduino Tian */

/* ESP8266系統 v2.5.0 */
#define ESP8266_GENERIC     301 /* ESP8266 Generic / Invent One / XinaBox CW01 */
#define ESP8285_GENERIC     302 /* Generic ESP8265 */
#define ESP8266_ESPDUINO    303 /* ESPDuino (ESP-13 Module) / ThaiEasyElec's ESPino */
#define ESP8266_ESPINO      304 /* Adafruit Feather HUZZAH ESP8266 /ESPino (ESP-12 Module) / WifInfo */
#define ESP8266_WIFINFO     305
#define ESP8266_WIFINFO2    306
#define ESP8266_ESPRESSO_LITE_V1  307 /* ESPresso Lite 1.0 */
#define ESP8266_ESPRESSO_LITE_V2  308 /* ESPresso Lite 2.0 */
#define ESP8266_PHOENIX_V1    309 /* Phoenix 1.0 */
#define ESP8266_PHOENIX_V2    310 /* Phoenix 2.0 */
#define ESP8266_NODEMCU     311 /* NodeMCU 0.9 (ESP-12 Module) / NodeMCU 1.0 (ESP-12E Module) / nodemcuv2 */
#define ESP8266_MOD_WIFI    312 /* Olimex MOD-WIFI-ESP8266(-DEV) */
#define ESP8266_THING     313 /* SparkFun ESP8266 Thing */
#define ESP8266_THING_DEV   314 /* SparkFun ESP8266 Thing Dev */
#define ESP8266_ESP210      315 /* SweetPea ESP-210 */
#define ESP8266_WEMOS_D1MINI    316 /* LOLIN(WEMOS) D1 R2 & mini */
#define ESP8266_WEMOS_D1MINIPRO   317 /* LOLIN(WEMOS) D1 mini Pro */
#define ESP8266_WEMOS_D1MINILITE  318 /* LOLIN(WEMOS) D1 mini Lite */
#define ESP8266_WEMOS_D1R1    319 /* WeMos D1 R1 */
#define ESP8266_STAR_OTTO   320 /* Arduino (esp8266) */
#define ESP8266_UNOWIFI     321 
#define ESP8266_ARDUINO     322
#define ESP8266_PRIMO     323
#define ESP8266_GEN4_IOD    324 /* 4D Systems gen4 IoD Range */
#define ESP8266_OAK     325 /* Digistump Oak */
#define ESP8266_WIFIDUINO   326 /* WiFiduino */
#define ESP8266_AMPERKA_WIFI_SLOT 327 /* Amperka WiFi Slot */
#define ESP8266_WIO_LINK    328 /* Seeed Wio Link */
#define ESP8266_ESPECTRO_CORE   329 /* ESPectro Core */

/*  ESP32系統 v1.0.2 */
#define ESP32_GENERIC     401 /* ESP32 Generic (ESP32 Dev Module / Wrover Module / XinaBox CW02 / FireBeetle-ESP32 / DOIT ESP32 DEVKIT V1 */
#define ESP32_PICO      402 /* Pico Kit / Turta IoT Node */
#define ESP32_TTGO_LoRa32_V1    403 /* TTGO LoRa32-OLED V1 */
#define ESP32_THING     404 /* SparkFun ESP32 Thing */
#define ESP32_UBLOX_NINA_W10    405 /* u-blox NINA-W10 */
#define ESP32_WIDORA_AIR    406 /* Widora AIR */
#define ESP32_ESP320      407 /* Electronic SweetPeas - ESP320 */
#define ESP32_NANO32      408 /* Nano320 */
#define ESP32_LOLIN_D32     409 /* Lolin D32 */
#define ESP32_LOLIN_D32_PRO   410 /* Lolin D32 Pro */
#define ESP32_LOLIN32     411 /* Wemos Lolin32 */
#define ESP32_Pocket32      412 /* Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery */
#define ESP32_ESPea32     413 /* ESPea32 */
#define ESP32_QUANTUM     414 /* Noduino Quantum */
#define ESP32_Node32s     415 /* Node32s */
#define ESP32_HORNBILL_DEV    416 /* Hornbill32dev */
#define ESP32_HORNBILL_MINIMA   417 /* Hornbill ESP32 Minima */
#define ESP32_INTOROBOT_DEV   418 /* IntoRobot Fig */
#define ESP32_ONEHORSE_DEV    419 /* Onehorse ESP32 Dev Module */
#define ESP32_FEATHER     420 /* Adafruit ESP32 Feather */
#define ESP32_NodeMCU_32S   421 /* NodeMCU-32S */
#define ESP32_MH_ET_LIVE_DEVKIT   422 /* MH ET LIVE ESP32DevKIT */
#define ESP32_MH_ET_LIVE_MINIKIT  423 /* MH ET LIVE ESP32MiniKit */
#define ESP32_vn_iot_uno    424 /* ESP32vn IoT Uno */
#define ESP32_EVB     425 /* OLIMEX ESP32-EVB */
#define ESP32_GATEWAY     426 /* OLIMEX ESP32-GATEWAY */
#define ESP32_POE     427 /* OLIMEX ESP32-PoE */
#define ESP32_ESPino32      428 /* ThaiEasyElec's ESPino32 */
#define ESP32_M5Stack_Core    429 /* M5Stack-Core-ESP32 */
#define ESP32_M5STACK_FIRE    430 /* M5Stack-FIRE */
#define ESP32_M5Stick_C     431 /* M5Stick-C */
#define ESP32_ODROID      432 /* ODROID ESP32 */
#define ESP32_HELTEC_WIFI_KIT_32  433 /* Heltec WiFi Kit 32 */
#define ESP32_Heltec_WIFI_LoRa_32 434 /* Heltec WiFi LoRa 32 */
#define ESP32_Heltec_WIFI_LoRa_32_V2  435 /* Heltec Wireless Stick */
#define ESP32_ESPECTRO32    436 /* ESPectro32 */
#define ESP32_CoreESP32     437 /* Microduino-CoreESP32 */
#define ESP32_ALKS      438 /* ALKS ESP32 */
#define ESP32_WIPY3     439 /* WiPy3 */
/*#define ESP32_BPI-BIT 440  BPI-BIT */
#define ESP32_WESP32      441 /* Silicognition wESP32 */
/*#define ESP32_T-Beam      442  T-Beam */
/*#define ESP32_D-duino-32    443 d-duino-32 */
#define ESP32_LoPy      444 /* lopy */
#define ESP32_LoPy4     445 /* lopy4 */
#define ESP32_OROCA_EDUBOT    446 /* oroca_edubot */
/*#define ESP32_fm-devkit     447  ESP32 FM devkit */
#define ESP32_FROG_BOARD    448 /*Frog Board ESP32 */

/* Arduino Yun */
#if defined(ARDUINO_AVR_YUN) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_YUN
#endif /* defined(ARDUINO_AVR_YUN) && defined(__AVR_ATmega32U4__) */

/* Arduino Uno */
#if defined(ARDUINO_AVR_UNO) && defined(__AVR_ATmega328P__)
#define HARDWARE_TYPE AVR_UNO
#endif /* defined(ARDUINO_AVR_UNO) && defined(__AVR_ATmega328P__) */

/* Arduino Duemilanove */
#ifdef ARDUINO_AVR_DUEMILANOVE
#ifdef __AVR_ATmega328P__
#define HARDWARE_TYPE AVR_DUEMILANOVE_328P
#else /* __AVR_ATmega328P__ */
#ifdef __AVR_ATmega168__
#define HARDWARE_TYPE AVR_DUEMILANOVE_168
#endif /* __AVR_ATmega168__ */
#endif /* __AVR_ATmega328P__ */
#endif /* ARDUINO_AVR_DUEMILANOVE */

/* Arduino Nano系統 */
#ifdef ARDUINO_AVR_NANO
#ifdef __AVR_ATmega328P__
#define HARDWARE_TYPE AVR_NANO_328P
#else /* __AVR_ATmega328P__ */
#ifdef __AVR_ATmega168__
#define HARDWARE_TYPE AVR_NANO_168
#endif /* __AVR_ATmega168__ */
#endif /* __AVR_ATmega328P__ */
#endif /* ARDUINO_AVR_NANO */

/* Arduino Mega2560 */
#if defined(ARDUINO_AVR_MEGA2560) && defined(__AVR_ATmega2560__)
#define HARDWARE_TYPE AVR_MEGA2560
#endif /* defined(ARDUINO_AVR_MEGA2560) && defined(__AVR_ATmega2560__) */

/* Arduino Mega */
#if defined(ARDUINO_AVR_MEGA) && defined(__AVR_ATmega1280__)
#define HARDWARE_TYPE AVR_MEGA
#endif /* defined(ARDUINO_AVR_MEGA) && defined(__AVR_ATmega1280__) */

/* Arduino ADK */
#if defined(ARDUINO_AVR_ADK) && defined(__AVR_ATmega2560__)
#define HARDWARE_TYPE AVR_ADK
#endif /* defined(ARDUINO_AVR_ADK) && defined(__AVR_ATmega2560__) */

/* Arduino Leonardo */
#if defined(ARDUINO_AVR_LEONARDO) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_LEONARDO
#endif /* defined(ARDUINO_AVR_LEONARDO) && defined(__AVR_ATmega32U4__) */

/* Arduino Leonardo Ethernet */
#if defined(ARDUINO_AVR_LEONARDO_ETH) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_LEONARDO_ETH
#endif /* defined(ARDUINO_AVR_LEONARDO_ETH) && defined(__AVR_ATmega32U4__) */

/* Arduino Micro */
#if defined(ARDUINO_AVR_MICRO) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_MICRO
#endif /* defined(ARDUINO_AVR_MICRO) && defined(__AVR_ATmega32U4__) */

/* Arduino Esplora */
#if defined(ARDUINO_AVR_ESPLORA) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_ESPLORA
#endif /* defined(ARDUINO_AVR_ESPLORA) && defined(__AVR_ATmega32U4__) */

/* Arduino Mini */
#ifdef ARDUINO_AVR_MINI
#ifdef __AVR_ATmega328P__
#define HARDWARE_TYPE AVR_MINI_328P
#else /* __AVR_ATmega328P__ */
#ifdef __AVR_ATmega168__
#define HARDWARE_TYPE AVR_MINI_168
#endif /* __AVR_ATmega168__ */
#endif /* __AVR_ATmega328P__ */
#endif /* ARDUINO_AVR_MINI */

/* Arduino Ethernet */
#if defined(ARDUINO_AVR_ETHERNET) && defined(__AVR_ATmega328P__)
#define HARDWARE_TYPE AVR_ETHERNET
#endif /* defined(ARDUINO_AVR_ETHERNET) && defined(__AVR_ATmega328P__) */

/* Arduino Fio */
#if defined(ARDUINO_AVR_FIO) && defined(__AVR_ATmega328P__)
#define HARDWARE_TYPE AVR_FIO
#endif /* defined(ARDUINO_AVR_FIO) && defined(__AVR_ATmega328P__) */

/* Arduino BT (ATmega328P/ATmega168) */
#if defined(ARDUINO_AVR_BT) && defined(__AVR_ATmega328P__)
#define HARDWARE_TYPE AVR_BT_328P
#endif /* defined(ARDUINO_AVR_BT) && defined(__AVR_ATmega328P__) */
#if defined(ARDUINO_AVR_BT) && defined(__AVR_ATmega168__)
#define HARDWARE_TYPE AVR_BT_168
#endif /* defined(ARDUINO_AVR_BT) && defined(__AVR_ATmega168__) */

/* LilyPad Arduino USB */
#if defined(ARDUINO_AVR_LILYPAD_USB) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_LILYPAD_USB
#endif /* defined(ARDUINO_AVR_LILYPAD_USB) && defined(__AVR_ATmega32U4__) */

/* LilyPad Arduino (ATmega328P/ATmega168) */
#if defined(ARDUINO_AVR_LILYPAD) && defined(__AVR_ATmega328P__)
#define HARDWARE_TYPE AVR_LILYPAD_328P
#endif /* defined(ARDUINO_AVR_LILYPAD) && defined(__AVR_ATmega328P__) */
#if defined(ARDUINO_AVR_LILYPAD) && defined(__AVR_ATmega168__)
#define HARDWARE_TYPE AVR_LILYPAD_168
#endif /* defined(ARDUINO_AVR_LILYPAD) && defined(__AVR_ATmega168__) */

/* Arduino Pro or Pro Mini */
#if defined(ARDUINO_AVR_PRO) && defined(__AVR_ATmega328P__) && F_CPU==16000000L
#define HARDWARE_TYPE AVR_PRO_328P_5V
#endif /* defined(ARDUINO_AVR_PRO) && defined(__AVR_ATmega328P__) && F_CPU==16000000L */
#if defined(ARDUINO_AVR_PRO) && defined(__AVR_ATmega328P__) && F_CPU==8000000L
#define HARDWARE_TYPE AVR_PRO_328P_3_3V
#endif /* defined(ARDUINO_AVR_PRO) && defined(__AVR_ATmega328P__) && F_CPU==8000000L */
#if defined(ARDUINO_AVR_PRO) && defined(__AVR_ATmega168__) && F_CPU==16000000L
#define HARDWARE_TYPE AVR_PRO_168_5V
#endif /* defined(ARDUINO_AVR_PRO) && defined(__AVR_ATmega168__) && F_CPU==16000000L */
#if defined(ARDUINO_AVR_PRO) && defined(__AVR_ATmega168__) && F_CPU==8000000L
#define HARDWARE_TYPE AVR_PRO_168_3_3V
#endif /* defined(ARDUINO_AVR_PRO) && defined(__AVR_ATmega168__) && F_CPU==8000000L */

/* Arduino NG */
#if defined(ARDUINO_AVR_NG) && defined(__AVR_ATmega168__)
#define HARDWARE_TYPE AVR_NG_168
#endif /* defined(ARDUINO_AVR_NG) && defined(__AVR_ATmega168__) */
#if defined(ARDUINO_AVR_NG) && defined(__AVR_ATmega8__)
#define HARDWARE_TYPE AVR_NG_8
#endif /* defined(ARDUINO_AVR_NG) && defined(__AVR_ATmega8__) */

/* Arduino Robot Control */
#if defined(ARDUINO_AVR_ROBOT_CONTROL) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_ROBOT_CONTROL
#endif /* defined(ARDUINO_AVR_ROBOT_CONTROL) && defined(__AVR_ATmega32U4__) */

/* Arduino Robot Motor */
#if defined(ARDUINO_AVR_ROBOT_MOTOR) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_ROBOT_MOTOR
#endif /* defined(ARDUINO_AVR_ROBOT_MOTOR) && defined(__AVR_ATmega32U4__) */

/* Arduino Gemma */
#if defined(ARDUINO_AVR_GEMMA) && defined(__AVR_ATtimy85__)
#define HARDWARE_TYPE AVR_GEMMA
#endif /* defined(ARDUINO_AVR_GEMMA) && defined(__AVR_ATtimy85__) */

/* Arduino Circuit play */
#if defined(ARDUINO_AVR_CIRCUITPLAY) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_CIRCUITPLAY
#endif /* defined(ARDUINO_AVR_CIRCUITPLAY) && defined(__AVR_ATmega32U4__) */

/* Arduino Yun Mini */
#if defined(ARDUINO_AVR_YUNMINI) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_YUNMINI
#endif /* defined(ARDUINO_AVR_YUNMINI) && defined(__AVR_ATmega32U4__) */

/* Arduino Industrial101 */
#if defined(ARDUINO_AVR_INDUSTRIAL101) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_INDUSTRIAL101
#endif /* defined(ARDUINO_AVR_INDUSTRIAL101) && defined(__AVR_ATmega32U4__) */

/* Arduino Lilino One */
#if defined(ARDUINO_AVR_LININO_ONE) && defined(__AVR_ATmega32U4__)
#define HARDWARE_TYPE AVR_LININO_ONE
#endif /* defined(ARDUINO_AVR_LININO_ONE) && defined(__AVR_ATmega32U4__) */

/* Arduino Uno Wifi Developer Edition */
#if defined(ARDUINO_AVR_UNO_WIFI_DEV_ED) && defined(__AVR_ATmega328P__)
#define HARDWARE_TYPE AVR_UNO_WIFI_DEV_ED
#endif /* defined(ARDUINO_AVR_UNO_WIFI_DEV_ED) && defined(__AVR_ATmega328P__) */

/*  SAM系統  */

/* Arduino Due */
#if defined(ARDUINO_SAM_DUE) && defined(__SAM3X8E__)
#define HARDWARE_TYPE SAM_DUE
#endif /* defined(ARDUINO_SAM_DUE) && defined(__SAM3X8E__) */

/*  SAMD系統  */
/* Arduino Zero */
#if defined(ARDUINO_SAMD_ZERO) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_ZERO
#endif /* defined(ARDUINO_SAMD_ZERO) && defined(__SAMD21G18A__) */

/* Arduino/Genuino MKR1000 */
#if defined(ARDUINO_SAMD_MKR1000) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_MKR1000
#endif /* defined(ARDUINO_SAMD_MKR1000) && defined(__SAMD21G18A__) */

/* Arduino MKRZero */
#if defined(ARDUINO_SAMD_MKRZERO) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_MKRZERO
#endif /* defined(ARDUINO_SAMD_MKRZERO) && defined(__SAMD21G18A__) */

/* Arduino MKRFox1200 */
#if defined(ARDUINO_SAMD_MKRFox1200) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_MKRFox1200
#endif /* defined(ARDUINO_SAMD_MKRFox1200) && defined(__SAMD21G18A__) */

/* Arduino MKR GSM 1400 */
#if defined(ARDUINO_SAMD_MKRGSM1400) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_MKRGSM1400
#endif /* define(ARDUINO_SAMD_MKRGSM1400) && defined(__SAMD21G18A__) */

/* Arduino MKR WAN 1300 */
#if defined(ARDUINO_SAMD_MKRWAN1300) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_MKRWAN1300
#endif /* defined(ARDUINO_SAMD_MKRWAN1300) && defined(__SAMD21G18A__) */

/* Arduino MKR WiFi 1010 */
#if defined(ARDUINO_SAMD_MKRWIFI1010) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_MKRWIFI1010
#endif /* defined(ARDUINO_SAMD_MKRWIFI1010) && defined(__SAMD21G18A__) */

/* Adafruit Circuit Playground M0 */
#if defined(ARDUINO_SAMD_CIRCUITPLAYGROUND_EXPRESS) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_CIRCUITPLAYGROUND_EXPRESS
#endif /* defined(ARDUINO_SAMD_CIRCUITPLAYGROUND_EXPRESS) && defined(__SAMD21G18A__) */

/* M0 pro / M0 */
#if defined(ARDUINO_SAM_ZERO) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAM_ZERO
#endif /* defined(ARDUINO_SAM_ZERO) && defined(__SAMD21G18A__) */

/* Arduino Tian */
#if defined(ARDUINO_SAMD_TIAN) && defined(__SAMD21G18A__)
#define HARDWARE_TYPE SAMD_TIAN
#endif /* defined(ARDUINO_SAMD_TIAN) && defined(__SAMD21G18A__) */

/* ESP8266系統 v2.5.0 */
/* ESP8266 Generic / Invent One / XinaBox CW01 */
#ifdef ARDUINO_ESP8266_GENERIC
#define HARDWARE_TYPE ESP8266_GENERIC
#endif /* ARDUINO_ESP8266_GENERIC*/

/* Generic ESP8265 */
#ifdef ARDUINO_ESP8266_ESP01
#define HARDWARE_TYPE ESP8285_GENERIC
#endif /* ARDUINO_ESP8266_ESP01 */

/* ESPDuino (ESP-13 Module) / ThaiEasyElec's ESPino */
#ifdef ARDUINO_ESP8266_ESP13
#define HARDWARE_TYPE ESP8266_ESPDUINO
#endif /* ARDUINO_ESP8266_ESP13 */

/* Adafruit Feather HUZZAH ESP8266 /ESPino (ESP-12 Module) / WifInfo */
#ifdef ARDUINO_ESP8266_ESP12
#define HARDWARE_TYPE ESP8266_ESPINO
#endif /* ARDUINO_ESP8266_ESP12 */
#ifdef ARDUINO_ESP8266_ESP07
#define HARDWARE_TYPE ESP8266_WIFINFO
#endif /* ARDUINO_ESP8266_ESP07 */
#ifdef ARDUINO_WIFINFO
#define HARDWARE_TYPE ESP8266_WIFINFO2
#endif /* ARDUINO_WIFINFO */

/* ESPresso Lite 1.0 */
#ifdef ARDUINO_ESP8266_ESPRESSO_LITE_V1
#define HARDWARE_TYPE ESP8266_ESPRESSO_LITE_V1
#endif /* ARDUINO_ESP8266_ESPRESSO_LITE_V1 */

/* ESPresso Lite 2.0 */
#ifdef ARDUINO_ESP8266_ESPRESSO_LITE_V2
#define HARDWARE_TYPE ESP8266_ESPRESSO_LITE_V2
#endif /* ARDUINO_ESP8266_ESPRESSO_LITE_V2 */

/* Phoenix 1.0 */
#ifdef ARDUINO_ESP8266_PHOENIX_V1
#define HARDWARE_TYPE ESP8266_PHOENIX_V1
#endif /* ARDUINO_ESP8266_PHOENIX_V1 */

/* Phoenix 2.0 */
#ifdef ARDUINO_ESP8266_PHOENIX_V2
#define HARDWARE_TYPE ESP8266_PHOENIX_V2
#endif /* ARDUINO_ESP8266_PHOENIX_V2 */

/* NodeMCU 0.9 (ESP-12 Module) / NodeMCU 1.0 (ESP-12E Module) / nodemcuv2 */
#ifdef ARDUINO_ESP8266_NODEMCU
#define HARDWARE_TYPE ESP8266_NODEMCU
#endif /* ARDUINO_ESP8266_NODEMCU */

/* Olimex MOD-WIFI-ESP8266(-DEV) */
#ifdef ARDUINO_MOD_WIFI_ESP8266
#define HARDWARE_TYPE ESP8266_MOD_WIFI
#endif /* ARDUINO_MOD_WIFI_ESP8266 */

/* SparkFun ESP8266 Thing */
#ifdef ARDUINO_ESP8266_THING
#define HARDWARE_TYPE ESP8266_THING
#endif /* ARDUINO_ESP8266_THING */

/* SparkFun ESP8266 Thing Dev */
#ifdef ARDUINO_ESP8266_THING_DEV
#define HARDWARE_TYPE ESP8266_THING_DEV
#endif /* ARDUINO_ESP8266_THING_DEV */

/* SweetPea ESP-210 */
#ifdef ARDUINO_ESP8266_ESP210
#define HARDWARE_TYPE ESP8266_ESP210
#endif /* ARDUINO_ESP8266_ESP210 */

/* LOLIN(WEMOS) D1 R2 & mini */
#ifdef ARDUINO_ESP8266_WEMOS_D1MINI
#define HARDWARE_TYPE ESP8266_WEMOS_D1MINI
#endif /* ARDUINO_ESP8266_WEMOS_D1MINI */

/* LOLIN(WEMOS) D1 mini Pro */
#ifdef ARDUINO_ESP8266_WEMOS_D1MINIPRO
#define HARDWARE_TYPE ESP8266_WEMOS_D1MINIPRO
#endif /* ARDUINO_ESP8266_WEMOS_D1MINIPRO */

/* LOLIN(WEMOS) D1 mini Lite */
#ifdef ARDUINO_ESP8266_WEMOS_D1MINILITE
#define HARDWARE_TYPE ESP8266_WEMOS_D1MINILITE
#endif /* ARDUINO_ESP8266_WEMOS_D1MINILITE */

/* WeMos D1 R1 */
#ifdef ARDUINO_ESP8266_WEMOS_D1R1
#define HARDWARE_TYPE ESP8266_WEMOS_D1R1
#endif /* ARDUINO_ESP8266_WEMOS_D1R1 */

/* Arduino (esp8266) */
#ifdef ARDUINO_ESP8266_ARDUINO_STAR_OTTO
#define HARDWARE_TYPE ESP8266_STAR_OTTO
#endif /* ARDUINO_ESP8266_ARDUINO_STAR_OTTO */

#ifdef ARDUINO_ESP8266_ARDUINO_UNOWIFI
#define HARDWARE_TYPE ESP8266_UNOWIFI
#endif /* ARDUINO_ESP8266_ARDUINO_UNOWIFI */

#ifdef ARDUINO_ESP8266_ARDUINO
#define HARDWARE_TYPE ESP8266_ARDUINO
#endif /* ARDUINO_ESP8266_ARDUINO */


#ifdef ARDUINO_ESP8266_ARDUINO_PRIMO
#define HARDWARE_TYPE ESP8266_PRIMO
#endif /* ARDUINO_ESP8266_ARDUINO_PRIMO */

/* 4D Systems gen4 IoD Range */
#ifdef ARDUINO_GEN4_IOD
#define HARDWARE_TYPE ESP8266_GEN4_IOD
#endif /* ARDUINO_GEN4_IOD */

/* Digistump Oak */
#ifdef ARDUINO_ESP8266_OAK
#define HARDWARE_TYPE ESP8266_OAK
#endif /* ARDUINO_ESP8266_OAK */

/* WiFiduino */
#ifdef ARDUINO_WIFIDUINO_ESP8266
#define HARDWARE_TYPE ESP8266_WIFIDUINO
#endif /* ARDUINO_WIFIDUINO_ESP8266 */

/* Amperka WiFi Slot */
#ifdef ARDUINO_AMPERKA_WIFI_SLOT
#define HARDWARE_TYPE ESP8266_AMPERKA_WIFI_SLOT
#endif /* ARDUINO_AMPERKA_WIFI_SLOT */

/* Seeed Wio Link */
#ifdef ARDUINO_ESP8266_WIO_LINK
#define HARDWARE_TYPE ESP8266_WIO_LINK
#endif /* ARDUINO_ESP8266_WIO_LINK */

/* ESPectro Core */
#ifdef ARDUINO_ESP8266_ESPECTRO_CORE
#define HARDWARE_TYPE ESP8266_ESPECTRO_CORE
#endif /* ARDUINO_ESP8266_ESPECTRO_CORE */

/*  ESP32系統 v1.0.2 */
/* ESP32 Generic (ESP32 Dev Module / Wrover Module / XinaBox CW02 / FireBeetle-ESP32 / DOIT ESP32 DEVKIT V1 */
#ifdef ARDUINO_ESP32_DEV
#define HARDWARE_TYPE ESP32_GENERIC
#endif /* ARDUINO_ESP32_DEV */

/* Pico Kit / Turta IoT Node */
#ifdef ARDUINO_ESP32_PICO
#define HARDWARE_TYPE ESP32_PICO
#endif /* ARDUINO_ESP32_PICO */

/* TTGO LoRa32-OLED V1 */
#ifdef ARDUINO_TTGO_LoRa32_V1
#define HARDWARE_TYPE ESP32_TTGO_LoRa32_V1
#endif /* ARDUINO_TTGO_LoRa32_V1 */

/* SparkFun ESP32 Thing */
#ifdef ARDUINO_ESP32_THING
#define HARDWARE_TYPE ESP32_THING
#endif /* ARDUINO_ESP32_THING */

/* u-blox NINA-W10 */
#ifdef ARDUINO_UBLOX_NINA_W10
#define HARDWARE_TYPE ESP32_UBLOX_NINA_W10
#endif /* ARDUINO_UBLOX_NINA_W10 */

/* Widora AIR */
#ifdef ARDUINO_WIDORA_AIR
#define HARDWARE_TYPE ESP32_WIDORA_AIR
#endif /* ARDUINO_WIDORA_AIR */

/* Electronic SweetPeas - ESP320 */
#ifdef ARDUINO_ESP320
#define HARDWARE_TYPE ESP32_ESP320
#endif /* ARDUINO_ESP320 */

/* Nano320 */
#ifdef ARDUINO_NANO32
#define HARDWARE_TYPE ESP32_NANO32
#endif /* ARDUINO_NANO32 */

/* Lolin D32 */
#ifdef ARDUINO_LOLIN_D32
#define HARDWARE_TYPE ESP32_LOLIN_D32
#endif /* ARDUINO_LOLIN_D32 */

/* Lolin D32 Pro */
#ifdef ARDUINO_LOLIN_D32_PRO
#define HARDWARE_TYPE ESP32_LOLIN_D32_PRO
#endif /* ARDUINO_LOLIN_D32_PRO */

/* Wemos Lolin32 */
#ifdef ARDUINO_LOLIN32
#define HARDWARE_TYPE ESP32_LOLIN32
#endif /* ARDUINO_LOLIN32 */

/* Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery */
#ifdef ARDUINO_Pocket32
#define HARDWARE_TYPE ESP32_Pocket32
#endif /* ARDUINO_Pocket32 */

/* ESPea32 */
#ifdef ARDUINO_ESPea32
#define HARDWARE_TYPE ESP32_ESPea32
#endif /* ARDUINO_ESPea32 */

/* Noduino Quantum */
#ifdef ARDUINO_QUANTUM
#define HARDWARE_TYPE ESP32_QUANTUM
#endif /* ARDUINO_QUANTUM */

/* Node32s */
#ifdef ARDUINO_Node32s
#define HARDWARE_TYPE ESP32_Node32s
#endif /* ARDUINO_Node32s */

/* Hornbill32dev */
#ifdef ARDUINO_HORNBILL_ESP32_DEV
#define HARDWARE_TYPE ESP32_HORNBILL_DEV
#endif /* ARDUINO_HORNBILL_ESP32_DEV */

/* Hornbill ESP32 Minima */
#ifdef ARDUINO_HORNBILL_ESP32_MINIMA
#define HARDWARE_TYPE ESP32_HORNBILL_MINIMA
#endif /* ARDUINO_HORNBILL_ESP32_MINIMA */

/* IntoRobot Fig */
#ifdef ARDUINO_INTOROBOT_ESP32_DEV
#define HARDWARE_TYPE ESP32_INTOROBOT_DEV
#endif /* ARDUINO_INTOROBOT_ESP32_DEV */

/* Onehorse ESP32 Dev Module */
#ifdef ARDUINO_ONEHORSE_ESP32_DEV
#define HARDWARE_TYPE ESP32_ONEHORSE_DEV
#endif /* ARDUINO_ONEHORSE_ESP32_DEV */

/* Adafruit ESP32 Feather */
#ifdef ARDUINO_FEATHER_ESP32
#define HARDWARE_TYPE ESP32_FEATHER
#endif /* ARDUINO_FEATHER_ESP32 */

/* NodeMCU-32S */
#ifdef ARDUINO_NodeMCU_32S
#define HARDWARE_TYPE ESP32_NodeMCU_32S
#endif /* ARDUINO_NodeMCU_32S */

/* MH ET LIVE ESP32DevKIT */
#ifdef ARDUINO_MH_ET_LIVE_ESP32DEVKIT
#define HARDWARE_TYPE ESP32_MH_ET_LIVE_DEVKIT
#endif /* ARDUINO_MH_ET_LIVE_ESP32DEVKIT */

/* MH ET LIVE ESP32MiniKit */
#ifdef ARDUINO_MH_ET_LIVE_ESP32MINIKIT
#define HARDWARE_TYPE ESP32_MH_ET_LIVE_MINIKIT
#endif /* ARDUINO_MH_ET_LIVE_ESP32MINIKIT */

/* ESP32vn IoT Uno */
#ifdef ARDUINO_esp32vn_iot_uno
#define HARDWARE_TYPE ESP32_vn_iot_uno
#endif /* ARDUINO_esp32vn_iot_uno */

/* OLIMEX ESP32-EVB */
#ifdef ARDUINO_ESP32_EVB
#define HARDWARE_TYPE ESP32_EVB
#endif /* ARDUINO_ESP32_EVB */

/* OLIMEX ESP32-GATEWAY */
#ifdef ARDUINO_ESP32_GATEWAY
#define HARDWARE_TYPE ESP32_GATEWAY
#endif /* ARDUINO_ESP32_GATEWAY */

/* OLIMEX ESP32-PoE */
#ifdef ARDUINO_ESP32_POE
#define HARDWARE_TYPE ESP32_POE
#endif /* ARDUINO_ESP32_POE */

/* ThaiEasyElec's ESPino32 */
#ifdef ARDUINO_ESPino32
#define HARDWARE_TYPE ESP32_ESPino32
#endif /* ARDUINO_ESPino32 */

/* M5Stack-Core-ESP32 */
#ifdef ARDUINO_M5Stack_Core_ESP32
#define HARDWARE_TYPE ESP32_M5Stack_Core
#endif /* ARDUINO_M5Stack_Core_ESP32 */

/* M5Stack-FIRE */
#ifdef ARDUINO_M5STACK_FIRE
#define HARDWARE_TYPE ESP32_M5STACK_FIRE
#endif /* ARDUINO_M5STACK_FIRE */

/* M5Stick-C */
#ifdef ARDUINO_M5Stick_C
#define HARDWARE_TYPE ESP32_M5Stick_C
#endif /* ARDUINO_M5Stick-C */

/* ODROID ESP32 */
#ifdef ARDUINO_ODROID_ESP32
#define HARDWARE_TYPE ESP32_ODROID
#endif /* ARDUINO_ODROID_ESP32 */


/* Heltec WiFi Kit 32 */
#ifdef ARDUINO_HELTEC_WIFI_KIT_32
#define HARDWARE_TYPE ESP32_HELTEC_WIFI_KIT_32
#endif /* ARDUINO_HELTEC_WIFI_KIT_32 */

/* Heltec WiFi LoRa 32 */
#ifdef ARDUINO_HELTEC_WIFI_LORA_32
#define HARDWARE_TYPE ESP32_Heltec_WIFI_LoRa_32
#endif /* ARDUINO_HELTEC_WIFI_LORA_32 */

/* Heltec WiFi LoRa 32 v2 */
#ifdef ARDUINO_HELTEC_WIFI_LORA_32_V2
#define HARDWARE_TYPE HELTEC_WIFI_LORA_32_V2
#endif /* ARDUINO_HELTEC_WIFI_LORA_32_V2 */

/* Heltec Wireless Stick */
#ifdef ARDUINO_HELTEC_WIRELESS_STICK
#define HARDWARE_TYPE ESP32_Heltec_WIFI_LoRa_32_V2
#endif /* ARDUINO_HELTEC_WIRELESS_STICK */

/* ESPectro32 */
#ifdef ARDUINO_ESPECTRO32
#define HARDWARE_TYPE ESP32_ESPECTRO32
#endif /* ARDUINO_ESPECTRO32 */

/* Microduino-CoreESP32 */
#ifdef ARDUINO_CoreESP32
#define HARDWARE_TYPE ESP32_CoreESP32
#endif /* ARDUINO_CoreESP32 */

/* ALKS ESP32 */
#ifdef ARDUINO_ALKS
#define HARDWARE_TYPE ESP32_ALKS
#endif /* ARDUINO_ALKS */

/* WiPy3 */
#ifdef ARDUINO_WIPY3
#define HARDWARE_TYPE ESP32_WIPY3
#endif /* ARDUINO_WIPY3 */

/* BPI-BIT */
#ifdef ARDUINO_BPI
#define HARDWARE_TYPE ESP32_BPI_BIT
#endif /* ARDUINO_BPI */


/* Silicognition wESP32 */
#ifdef ARDUINO_WESP32
#define HARDWARE_TYPE ESP32_WESP32
#endif /* ARDUINO_WESP32 */

/* T-Beam */
/*#ifdef ARDUINO_T_BEAM
#define HARDWARE_TYPE ESP32_T_Beam
#endif*/ /* ARDUINO_T-Beam */

/* d-duino-32 */
/*#ifdef ARDUINO_D-duino-32
#define HARDWARE_TYPE ESP32_D-duino-32
#endif *//* ARDUINO_D-duino-32 */

/* lopy */
#ifdef ARDUINO_LoPy
#define HARDWARE_TYPE ESP32_LoPy
#endif /* ARDUINO_LoPy */

/* lopy4 */
#ifdef ARDUINO_LoPy4
#define HARDWARE_TYPE ESP32_LoPy4
#endif /* ARDUINO_LoPy4 */

/* oroca_edubot */
#ifdef ARDUINO_OROCA_EDUBOT
#define HARDWARE_TYPE ESP32_OROCA_EDUBOT
#endif /* ARDUINO_OROCA_EDUBOT */

/* ESP32 FM devkit */
/*#ifdef ARDUINO_fm-devkit
#define HARDWARE_TYPE ESP32_fm-devkit
#endif*/ /* ARDUINO_fm-devkit */

/*Frog Board ESP32 */
#ifdef ARDUINO_FROG_ESP32
#define HARDWARE_TYPE ESP32_FROG_BOARD
#endif /* ARDUINO_FROG_ESP32 */

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
#if HARDWARE_TYPE == AVR_YUN
#define HARDWARE_NAME "ARDUINO Yun"
#define HARDWARE_VDD 5
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,10,11,12,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* AVR_YUN */

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
#if HARDWARE_TYPE == AVR_UNO
#define HARDWARE_NAME "ARDUINO UNO"
#define HARDWARE_VDD 5
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
#endif /* AVR_UNO */

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

#if (HARDWARE_TYPE == AVR_DUEMILANOVE_328P) || (HARDWARE_TYPE == AVR_DUEMILANOVE_168)
#define HARDWARE_VDD 5
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
#endif /* AVR_DUEMILANOVE_328P || AVR_DUEMILANOVE_168 */
#if HARDWARE_TYPE == AVR_DUEMILANOVE_328P
#define HARDWARE_NAME "ARDUINO Duemilanove 328P"
#endif /* AVR_DUEMILANOVE_328P */
#if HARDWARE_TYPE == AVR_DUEMILANOVE_168
#define HARDWARE_NAME "ARDUINO Duemilanove 168"
#endif /* AVR_DUEMILANOVE_168 */

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
#if (HARDWARE_TYPE == AVR_NANO_328P) || (HARDWARE_TYPE == AVR_NANO_168)
#define HARDWARE_VDD 5
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
#endif /* AVR_NANO_328P || AVR_NANO_168 */
#if HARDWARE_TYPE == AVR_NANO_328P
#define HARDWARE_NAME "ARDUINO Nano 328P"
#endif /* AVR_NANO_328P */
#if HARDWARE_TYPE == AVR_NANO_168
#define HARDWARE_NAME "ARDUINO Nano 168"
#endif /* AVR_NANO_168 */

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
/* Arduino Mega2560 , Mega , ADK*/
#if ( HARDWARE_TYPE == AVR_MEGA2560 ) || (HARDWARE_TYPE == AVR_MEGA) || (HARDWARE_TYPE == AVR_ADK)
#define HARDWARE_VDD 5
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
#endif /* AVR_MEGA2560 || AVR_MEGA  || AVR_ADK */
/* Arduino Mega2560 */
#if HARDWARE_TYPE == AVR_MEGA2560
#define HARDWARE_NAME "ARDUINO MEGA 2560"
#endif /* AVR_MEGA2560 */
/* Arduino Mega1280 */
#if HARDWARE_TYPE == AVR_MEGA
#define HARDWARE_NAME "ARDUINO MEGA 1280"
#endif /* AVR_MEGA */
/* Arduino ADK */
#if HARDWARE_TYPE == AVR_ADK
#define HARDWARE_NAME "ARDUINO ADK"
#endif /* AVR_ADK */

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
#if (HARDWARE_TYPE == AVR_LEONARDO) || (HARDWARE_TYPE == AVR_LEONARDO_ETH)
#define HARDWARE_VDD 5
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define ONBOARD_LED 13
#define SERIAL_RESET false
#endif /* AVR_LEONARDO || AVR_LEONARDO_ETH */
/* Arduino Leonardo */
#if HARDWARE_TYPE == AVR_LEONARDO
#define HARDWARE_NAME "ARDUINO Leonardo"
#endif /* AVR_LEONARDO */
/* Arduino Leonardo Ethernet */
#if HARDWARE_TYPE == AVR_LEONARDO_ETH
#define HARDWARE_NAME "ARDUINO Leonardo Ethernet"
#endif /* AVR_LEONARDO_ETH */

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
/* Arduino Micro */
#if HARDWARE_TYPE == AVR_MICRO
#define HARDWARE_NAME "ARDUINO Micro"
#define HARDWARE_VDD 5
#define HARDWARE_AREF HARDWARE_VDD
#define MAX_SERIAL 1
#define MAX_DIGITAL 14
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,10,11,12,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define ONBOARD_LED 13
#define SERIAL_RESET true
#endif /* AVR_MICRO */

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
#if HARDWARE_TYPE == AVR_ESPLORA
#define HARDWARE_NAME "ARDUINO Esplora"
#define HARDWARE_VDD 5
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
#endif /* AVR_ESPLORA */

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
#if (HARDWARE_TYPE == AVR_MINI_328P) || (HARDWARE_TYPE == AVR_MINI_168)
#define HARDWARE_VDD 5
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
#endif /* AVR_MINI_328P || AVR_MINI_168 */
/* Arduino Mini 328P */
#if HARDWARE_TYPE == AVR_MINI_328P
#define HARDWARE_NAME "ARDUINO MINI 328P"
#endif /* AVR_MINI_328P */
/* Arduino Mini 168 */
#if HARDWARE_TYPE == AVR_MINI_168
#define HARDWARE_NAME "ARDUINO MINI 168"
#endif /* AVR_MINI_168 */

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
#if HARDWARE_TYPE == AVR_ETHERNET
#define HARDWARE_NAME "ARDUINO Ethernet"
#define HARDWARE_VDD 5
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
#endif /* AVR_ETHERNET */

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
#if HARDWARE_TYPE == AVR_FIO
#define HARDWARE_NAME "ARDUINO Fio"
#define HARDWARE_VDD 3.3
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
#endif /* AVR_FIO */

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
#if (HARDWARE_TYPE == AVR_BT_328P) || (HARDWARE_TYPE == AVR_BT_168)
#define HARDWARE_VDD 5
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
#endif /* AVR_BT_328P || AVR_BT_168 */
#if HARDWARE_TYPE == AVR_BT_328P
#define HARDWARE_NAME "ARDUINO BT 328P"
#endif /* AVR_BT_328P */
#if HARDWARE_TYPE == AVR_BT_168
#define HARDWARE_NAME "ARDUINO BT 168"
#endif /* AVR_BT_168 */


/* LilyPad Arduino USB */
#if HARDWARE_TYPE == AVR_LILYPAD_USB
#endif /* AVR_LILYPAD_USB */

/* LilyPad Arduino (ATmega328P/ATmega168) */
#if HARDWARE_TYPE == AVR_LILYPAD_328P
#endif /* AVR_LILYPAD_328P */
#if HARDWARE_TYPE == AVR_LILYPAD_168
#endif /* AVR_LILYPAD_168 */

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
#if (HARDWARE_TYPE == AVR_PRO_328P_5V) || (HARDWARE_TYPE == AVR_PRO_328P_3_3V) || (HARDWARE_TYPE == AVR_PRO_168_5V) || (HARDWARE_TYPE == AVR_PRO_168_3_3V)
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
#endif /* AVR_PRO_328P_5V || AVR_PRO_328P_3_3V || AVR_PRO_168_5V || AVR_PRO_168_3_3V */
/* Arduino Pro or Pro Mini */
#if HARDWARE_TYPE == AVR_PRO_328P_5V
#define HARDWARE_NAME "ARDUINO Pro mini 328P 5V"
#define HARDWARE_VOLTAGE 5
#define HARDWARE_AREF HARDWARE_VDD
#endif /* AVR_PRO_328P_5V */
#if HARDWARE_TYPE == AVR_PRO_328P_3_3V
#define HARDWARE_NAME "ARDUINO Pro mini 328P 3.3V"
#define HARDWARE_VOLTAGE 3.3
#define HARDWARE_AREF HARDWARE_VDD
#endif /* AVR_PRO_328P_3_3V */
#if HARDWARE_TYPE == AVR_PRO_168_5V
#define HARDWARE_NAME "ARDUINO Pro mini 168 5V"
#define HARDWARE_VOLTAGE 5
#define HARDWARE_AREF HARDWARE_VDD
#endif /* AVR_PRO_168_5V */
#if HARDWARE_TYPE == AVR_PRO_168_3_3V
#define HARDWARE_NAME "ARDUINO Pro mini 168 3.3V"
#define HARDWARE_VOLTAGE 3.3
#define HARDWARE_AREF HARDWARE_VDD
#endif /* AVR_PRO_168_3_3V */

/* Arduino NG */
#if HARDWARE_TYPE == AVR_NG_168
#endif /* AVR_NG_168 */
#if HARDWARE_TYPE == AVR_NG_8
#endif /* AVR_NG_8 */

/* Arduino Robot Control */
#if HARDWARE_TYPE == AVR_ROBOT_CONTROL
#endif /* AVR_ROBOT_CONTROL */

/* Arduino Robot Motor */
#if HARDWARE_TYPE == AVR_ROBOT_MOTOR
#endif /* AVR_ROBOT_MOTOR */


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
#if HARDWARE_TYPE == AVR_GEMMA
#define HARDWARE_NAME "ARDUINO Gemma"
#define HARDWARE_VDD 3.3
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
#endif /* AVR_GEMMA */

/* Arduino Circuit play */
#if HARDWARE_TYPE == AVR_CIRCUITPLAY
#endif /* AVR_CIRCUITPLAY */

/* Arduino Yun Mini */
#if HARDWARE_TYPE == AVR_YUNMINI
#endif /* AVR_YUNMINI */

/* Arduino Industrial101 */
#if HARDWARE_TYPE == AVR_INDUSTRIAL101
#endif /* AVR_INDUSTRIAL101 */

/* Arduino Lilino One */
#if HARDWARE_TYPE == AVR_LININO_ONE
#endif /* AVR_LININO_ONE */

/* Arduino Uno Wifi Developer Edition */
#if HARDWARE_TYPE == AVR_UNO_WIFI_DEV_ED
#endif /* AVR_UNO_WIFI_DEV_ED */

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
#if HARDWARE_TYPE == SAM_DUE
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
#endif /* SAM_DUE */

/*  SAMD系統  */
/* Arduino Zero */
#if HARDWARE_TYPE == SAMD_ZERO
#endif /* SAMD_ZERO */

/* Arduino/Genuino MKR1000 */
#if HARDWARE_TYPE == SAMD_MKR1000
#endif /* SAMD_MKR1000 */

/* Arduino MKRZero */
#if HARDWARE_TYPE == SAMD_MKRZERO
#endif /* SAMD_MKRZERO */

/* Arduino MKRFox1200 */
#if HARDWARE_TYPE == SAMD_MKRFox1200
#endif /* SAMD_MKRFox1200 */

/* Arduino MKR GSM 1400 */
#if HARDWARE_TYPE == SAMD_MKRGSM1400
#endif /* SAMD_MKRGSM1400 */

/* Arduino MKR WAN 1300 */
#if HARDWARE_TYPE == SAMD_MKRWAN1300
#endif /* SAMD_MKRWAN1300 */

/* Arduino MKR WiFi 1010 */
#if HARDWARE_TYPE == SAMD_MKRWIFI1010
#endif /* SAMD_MKRWIFI1010 */

/* Adafruit Circuit Playground M0 */
#if HARDWARE_TYPE == SAMD_CIRCUITPLAYGROUND_EXPRESS
#endif /* SAMD_CIRCUITPLAYGROUND_EXPRESS */

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
#if HARDWARE_TYPE == SAM_ZERO
#define HARDWARE_NAME "ARDUINO M0/M0 Pro"
#define HARDWARE_VDD 3.3
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
#endif /* SAM_ZERO */

/* Arduino Tian */
#if HARDWARE_TYPE == SAMD_TIAN
#endif /* SAMD_TIAN */

/* ESP8266系統 v2.5.0 */
/* ESP8266 Generic / Invent One / XinaBox CW01 */
#if HARDWARE_TYPE == ESP8266_GENERIC
#endif /* ESP8266_GENERIC */

/* Generic ESP8265 */
#if HARDWARE_TYPE == ESP8285_GENERIC
#endif /* ESP8285_GENERIC */

/* ESPDuino (ESP-13 Module) / ThaiEasyElec's ESPino */
#if HARDWARE_TYPE == ESP8266_ESPDUINO
#endif /* ESP8266_ESPDUINO */

/* Adafruit Feather HUZZAH ESP8266 /ESPino (ESP-12 Module) / WifInfo */
#if HARDWARE_TYPE == ESP8266_ESPINO
#endif /* ESP8266_ESPINO */
#if HARDWARE_TYPE == ESP8266_WIFINFO
#endif /* ESP8266_WIFINFO */
#if HARDWARE_TYPE == ESP8266_WIFINFO2
#endif /* ESP8266_WIFINFO2 */

/* ESPresso Lite 1.0 */
#if HARDWARE_TYPE == ESP8266_ESPRESSO_LITE_V1
#endif /* ESP8266_ESPRESSO_LITE_V1 */

/* ESPresso Lite 2.0 */
#if HARDWARE_TYPE == ESP8266_ESPRESSO_LITE_V2
#endif /* ESP8266_ESPRESSO_LITE_V2 */

/* Phoenix 1.0 */
#if HARDWARE_TYPE == ESP8266_PHOENIX_V1
#endif /* ESP8266_PHOENIX_V1 */

/* Phoenix 2.0 */
#if HARDWARE_TYPE == ESP8266_PHOENIX_V2
#endif /* ESP8266_PHOENIX_V2 */

/* NodeMCU 0.9 (ESP-12 Module) / NodeMCU 1.0 (ESP-12E Module) / nodemcuv2 */
#if HARDWARE_TYPE == ESP8266_NODEMCU
#endif /* ESP8266_NODEMCU */

/* Olimex MOD-WIFI-ESP8266(-DEV) */
#if HARDWARE_TYPE == ESP8266_MOD_WIFI
#endif /* ESP8266_MOD_WIFI */

/* SparkFun ESP8266 Thing */
#if HARDWARE_TYPE == ESP8266_THING
#endif /* ESP8266_THING */

/* SparkFun ESP8266 Thing Dev */
#if HARDWARE_TYPE == ESP8266_THING_DEV
#endif /* ESP8266_THING_DEV */

/* SweetPea ESP-210 */
#if HARDWARE_TYPE == ESP8266_ESP210
#endif /* ESP8266_ESP210 */

/* LOLIN(WEMOS) D1 R2 & mini */
#if HARDWARE_TYPE == ESP8266_WEMOS_D1MINI
#endif /* ESP8266_WEMOS_D1MINI */

/* LOLIN(WEMOS) D1 mini Pro */
#if HARDWARE_TYPE == ESP8266_WEMOS_D1MINIPRO
#endif /* ESP8266_WEMOS_D1MINIPRO */

/* LOLIN(WEMOS) D1 mini Lite */
#if HARDWARE_TYPE == ESP8266_WEMOS_D1MINILITE
#endif /* ESP8266_WEMOS_D1MINILITE */

/* WeMos D1 R1 */
#if HARDWARE_TYPE == ESP8266_WEMOS_D1R1
#endif /* ESP8266_WEMOS_D1R1 */

/* Arduino (esp8266) */
#if HARDWARE_TYPE == ESP8266_STAR_OTTO
#endif /* ESP8266_STAR_OTTO */

#if HARDWARE_TYPE == ESP8266_UNOWIFI
#endif /* ESP8266_UNOWIFI */

#if HARDWARE_TYPE == ESP8266_ARDUINO
#endif /* ESP8266_ARDUINO */

#if HARDWARE_TYPE == ESP8266_PRIMO
#endif /* ESP8266_PRIMO */

/* 4D Systems gen4 IoD Range */
#if HARDWARE_TYPE == ESP8266_GEN4_IOD
#endif /* ESP8266_GEN4_IOD */

/* Digistump Oak */
#if HARDWARE_TYPE == ESP8266_OAK
#endif /* ESP8266_OAK */

/* WiFiduino */
#if HARDWARE_TYPE == ESP8266_WIFIDUINO
#endif /* ESP8266_WIFIDUINOk */

/* Amperka WiFi Slot */
#if HARDWARE_TYPE == ESP8266_AMPERKA_WIFI_SLOT
#endif /* ESP8266_AMPERKA_WIFI_SLOT */

/* Seeed Wio Link */
#if HARDWARE_TYPE == ESP8266_WIO_LINK
#endif /* ESP8266_WIO_LINK */

/* ESPectro Core */
#if HARDWARE_TYPE == ESP8266_ESPECTRO_CORE
#endif /* ESP8266_ESPECTRO_CORE */

/*  ESP32系統 v1.0.2 */
/* ESP32 Generic (ESP32 Dev Module / Wrover Module / XinaBox CW02 / FireBeetle-ESP32 / DOIT ESP32 DEVKIT V1 */
#if HARDWARE_TYPE == ESP32_GENERIC
#endif /* ESP32_GENERIC */

/* Pico Kit / Turta IoT Node */
#if HARDWARE_TYPE == ESP32_PICO
#endif /* ESP32_PICO */

/* TTGO LoRa32-OLED V1 */
#if HARDWARE_TYPE == ESP32_TTGO_LoRa32_V1
#endif /* ESP32_TTGO_LoRa32_V1 */

/* SparkFun ESP32 Thing */
#if HARDWARE_TYPE == ESP32_THING
#endif /* ESP32_THING */

/* u-blox NINA-W10 */
#if HARDWARE_TYPE == ESP32_UBLOX_NINA_W10
#endif /* ESP32_UBLOX_NINA_W10 */

/* Widora AIR */
#if HARDWARE_TYPE == ESP32_WIDORA_AIR
#endif /* ESP32_WIDORA_AIR */

/* Electronic SweetPeas - ESP320 */
#if HARDWARE_TYPE == ESP32_ESP320
#endif /* ESP32_ESP320 */

/* Nano320 */
#if HARDWARE_TYPE == ESP32_NANO32
#endif /* ESP32_NANO32 */

/* Lolin D32 */
#if HARDWARE_TYPE == ESP32_LOLIN_D32
#endif /* ESP32_LOLIN_D32 */

/* Lolin D32 Pro */
#if HARDWARE_TYPE == ESP32_LOLIN_D32_PRO
#endif /* ESP32_LOLIN_D32_PRO */

/* Wemos Lolin32 */
#if HARDWARE_TYPE == ESP32_LOLIN32
#endif /* ESP32_LOLIN32 */

/* Dongsen Tech Pocket 32 / WeMos WiFi&Bluetooth Battery */
#if HARDWARE_TYPE == ESP32_Pocket32
#endif /* ESP32_Pocket32 */

/* ESPea32 */
#if HARDWARE_TYPE == ESP32_ESPea32
#endif /* ESP32_ESPea32 */

/* Noduino Quantum */
#if HARDWARE_TYPE == ESP32_QUANTUM
#endif /* ESP32_QUANTUM */

/* Node32s */
#if HARDWARE_TYPE == ESP32_Node32s
#endif /* ESP32_Node32s */

/* Hornbill32dev */
#if HARDWARE_TYPE == ESP32_HORNBILL_DEV
#endif /* ESP32_HORNBILL_DEV */

/* Hornbill ESP32 Minima */
#if HARDWARE_TYPE == ESP32_HORNBILL_MINIMA
#endif /* ESP32_HORNBILL_MINIMA */

/* IntoRobot Fig */
#if HARDWARE_TYPE == ESP32_INTOROBOT_DEV
#endif /* ESP32_INTOROBOT_DEV */

/* Onehorse ESP32 Dev Module */
#if HARDWARE_TYPE == ESP32_ONEHORSE_DEV
#endif /* ESP32_ONEHORSE_DEV */

/* Adafruit ESP32 Feather */
#if HARDWARE_TYPE == ESP32_FEATHER
#endif /* ESP32_FEATHER */

/* NodeMCU-32S */
#if HARDWARE_TYPE == ESP32_NodeMCU_32S
#endif /* ESP32_NodeMCU_32S */

/* MH ET LIVE ESP32DevKIT */
#if HARDWARE_TYPE == ESP32_MH_ET_LIVE_DEVKIT
#endif /* ESP32_MH_ET_LIVE_DEVKIT */

/* MH ET LIVE ESP32MiniKit */
#if HARDWARE_TYPE == ESP32_MH_ET_LIVE_MINIKIT
#endif /* ESP32_MH_ET_LIVE_MINIKIT */

/* ESP32vn IoT Uno */
#if HARDWARE_TYPE == ESP32_vn_iot_uno
#endif /* ESP32_vn_iot_uno */

/* OLIMEX ESP32-EVB */
#if HARDWARE_TYPE == ESP32_EVB
#endif /* ESP32_EVB */

/* OLIMEX ESP32-GATEWAY */
#if HARDWARE_TYPE == ESP32_GATEWAY
#endif /* ESP32_GATEWAY */

/* OLIMEX ESP32-PoE */
#if HARDWARE_TYPE == ESP32_POE
#endif /* ESP32_POE */

/* ThaiEasyElec's ESPino32 */
#if HARDWARE_TYPE == ESP32_ESPino32
#endif /* ESP32_ESPino32 */

/* M5Stack-Core-ESP32 */
#if HARDWARE_TYPE == ESP32_M5Stack_Core
#endif /* ESP32_M5Stack_Core */

/* M5Stack-FIRE */
#if HARDWARE_TYPE == ESP32_M5STACK_FIRE
#endif /* ESP32_M5STACK_FIRE */

/* M5Stick-C */
#if HARDWARE_TYPE == ESP32_M5Stick_C
#endif /* ESP32_M5Stick_C */

/* ODROID ESP32 */
#if HARDWARE_TYPE == ESP32_ODROID
#endif /* ESP32_ODROID */

/* Heltec WiFi Kit 32 */
#if HARDWARE_TYPE == ESP32_HELTEC_WIFI_KIT_32
#endif /* ESP32_HELTEC_WIFI_KIT_32 */

/* Heltec WiFi LoRa 32 */
#if HARDWARE_TYPE == ESP32_Heltec_WIFI_LoRa_32
#endif /* ESP32_Heltec_WIFI_LoRa_32 */

/* Heltec WiFi LoRa 32 v2 */
#if HARDWARE_TYPE == HELTEC_WIFI_LORA_32_V2
#endif /* HELTEC_WIFI_LORA_32_V2 */

/* Heltec Wireless Stick */
#if HARDWARE_TYPE == ESP32_Heltec_WIFI_LoRa_32_V2
#endif /* ESP32_Heltec_WIFI_LoRa_32_V2 */

/* ESPectro32 */
#if HARDWARE_TYPE == ESP32_ESPECTRO32
#endif /* ESP32_ESPECTRO32 */

/* Microduino-CoreESP32 */
#if HARDWARE_TYPE == ESP32_CoreESP32
#endif /* ESP32_CoreESP32 */

/* ALKS ESP32 */
#if HARDWARE_TYPE == ESP32_ALKS
#endif /* ESP32_ALKS */

/* WiPy3 */
#if HARDWARE_TYPE == ESP32_WIPY3
#endif /* ESP32_WIPY3 */

/* BPI-BIT */
#if HARDWARE_TYPE == ESP32_BPI-BIT
#endif /* ESP32_BPI-BIT */

/* Silicognition wESP32 */
#if HARDWARE_TYPE == ESP32_WESP32
#endif /* ESP32_WESP32 */

/* T-Beam */
#if HARDWARE_TYPE == ESP32_T-Beam
#endif /* ESP32_T-Beam */

/* d-duino-32 */
#if HARDWARE_TYPE == ESP32_D-duino-32
#endif /* ESP32_D-duino-32 */

/* lopy */
#if HARDWARE_TYPE == ESP32_LoPy
#endif /* ESP32_LoPy */

/* lopy4 */
#if HARDWARE_TYPE == ESP32_LoPy4
#endif /* ESP32_LoPy4 */

/* oroca_edubot */
#if HARDWARE_TYPE == ESP32_OROCA_EDUBOT
#endif /* ESP32_OROCA_EDUBOT */

/* ESP32 FM devkit */
#if HARDWARE_TYPE == ESP32_fm-devkit
#endif /* ESP32_fm-devkit */

/*Frog Board ESP32 */
#if HARDWARE_TYPE == ESP32_FROG_BOARD
#endif /* ESP32_FROG_BOARD */


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



/*
 * 便利マクロ
 */
/*
 * シリアルポートのオープンでリセットがかからない機器への対応策
 */
#define waitForSerial() while(!SERIAL_RESET && (!Serial))



#endif /* __DETECT_ARDUINO_HARDWARE_H__ */
