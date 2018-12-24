#ifndef __DETECT_HARDWARE_H__
#define __DETECT_HARDWARE_H__

#include <Arduino.h>


// CPUアーキテクチャ
#define _AVR_ "AVR"
#define _ARM_ "ARM"
#define _ESP_ "ESP"

// 個別のチップ定義
#define _AVR_ATmega168_ "AVR_ATmega168"
#define _AVR_ATmega168P_ "AVR_ATmega168P"
#define _AVR_ATmega328P_ "AVR_ATmega328P"
#define _AVR_ATmega644P_ "AVR_ATmega644P"
#define _AVR_ATmega1280_ "AVR_ATmega1280"
#define _AVR_ATmega2560_ "AVR_ATmega2560"
#define _AVR_ATmega644_ "AVR_ATmega644"
#define _AVR_ATmega1284P_ "AVR_ATmega1284P"
#define _AVR_AT90USB646_ "AVR_AT90USB646"
#define _AVR_AT90USB1286_ "AVR_AT90USB1286"
#define _ATmega_32U4_A_ "ATmega_32U4A"
#define _ATmega_32U4_B_ "ATmega_32U4B"
#define _SAM3X8E_ "SAM3X8E"
#define _ESP8266_ "ESP8266"
#define _AT_TINY_85_ "AT_TINY_85"
#define _ESP32_ "ESP32"


// チップセットの定義
#define _ESP16_ "ESP16"
#define _ATmega_1280_2560_ "ATmega_1280_2560"
#define _ATmega_168_168P_328P_ "ATmega_168_168P_328P"
#define _ATmega_644_644P_1284P_ "ATmega_644_644P_1284P"
#define _AT90USB_646_1286_ "AT90USB_646_1286"
#define _ATmega_32U4_ "ATmega_32U4"
#define _SAM3X8E_ "SAM3X8E"
#define _AT_TINY_ "AT_TINY"


// 機種の定義
#define _ARDUINO_AVR_UNO_ 0
#define _ARDUINO_AVR_DUEMILANOVE_ 1
#define _ARDUINO_AVR_YUN_ 2
#define _ARDUINO_AVR_NANO_ 3
#define _ARDUINO_AVR_MEGA2560_ 4
#define _ARDUINO_AVR_MEGA_ 5
#define _ARDUINO_AVR_ADK_ 6
#define _ARDUINO_AVR_LEONARDO_ 7
#define _ARDUINO_AVR_MICRO_ 8
#define _ARDUINO_AVR_ESPLORA_ 9
#define _ARDUINO_AVR_MINI_ 10
#define _ARDUINO_AVR_ETHERNET_ 11
#define _ARDUINO_AVR_FIO_ 12
#define _ARDUINO_AVR_BT_ 13
#define _ARDUINO_AVR_PRO_ 14
#define _ARDUINO_AVR_NG_ 15
#define _ARDUINO_AVR_ROBOT_CONTROL_ 16
#define _ARDUINO_AVR_ROBOT_MOTOR_ 17
#define _ARDUINO_AVR_GEMMA_ 18
#define _ARDUINO_SAM_DUE_ 19
#define _ARDUINO_SAMD_ZERO_ 20
#define _ARDUINO_AVR_GEMMA_ 21
#define _CORE_TEENSY_ 22
#define _ARDUINO_ESP8266_ESP01_ 23

// 未定義
#define _UNKNOWN_ -1
//#define _UNKNOWN_ "unknown"

#ifdef __AVR__
#define CPU_ARCH _AVR_
#endif /* __AVR__ */

/*
 * チップの定義から，チップセット等の定義を自動で行う
 */

// 168 and 328 Arduinos
#ifdef __AVR_ATmega168__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_ATmega168_
#define CHIPSET _ATmega_168_168P_328P_
#endif /* __AVR_ATmega168__ */
#ifdef __AVR_ATmega168P__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_ATmega168P_
#define CHIPSET _ATmega_168_168P_328P_
#endif /* __AVR_ATmega168P__ */
#ifdef __AVR_ATmega328P__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_ATmega328P_
#define CHIPSET _ATmega_168_168P_328P_
#endif /* __AVR_ATmega328P__ */

// Mega 1280 & 2560
#ifdef __AVR_ATmega1280__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_ATmega1280_
#define CHIPSET _ATmega_1280_2560_
#endif /* __AVR_ATmega1280__ */
#ifdef __AVR_ATmega2560__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_ATmega2560_
#define CHIPSET _ATmega_1280_2560_
#endif /* __AVR_ATmega2560__ */


// Sanguino
#ifdef __AVR_ATmega644__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_ATmega644_
#define CHIPSET _ATmega_644_644P_1284P_
#endif /* __AVR_ATmega644__ */
#ifdef __AVR_ATmega644P__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_ATmega644P_
#define CHIPSET _ATmega_644_644P_1284P_
#endif /* __AVR_ATmega644P__ */
#ifdef __AVR_ATmega1284P__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_ATmega1284P_
#define CHIPSET _ATmega_644_644P_1284P_
#endif /* __AVR_ATmega1284P__ */

// Teensy++ 1.0 & 2.0
#ifdef __AVR_AT90USB646__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_AT90USB646_
#define CHIPSET _AT90USB_646_1286_
#endif /* __AVR_AT90USB646__ */
#ifdef __AVR_AT90USB1286__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIP _AVR_AT90USB1286_
#define CHIPSET _AT90USB_646_1286_
#endif /* __AVR_AT90USB1286__ */

// Teensy and Teensy 2.0
#ifdef __AVR_ATmega32U4__
#define __AVR__
#define CPU_ARCH _AVR_
#define CHIPSET _ATmega_32U4_
// Teensy 2.0
#ifdef CORE_TEENSY 
#define CHIP _ATmega_32U4_A_
// Teensy
#else /* CORE_TEENSY */
#define CHIP _ATmega_32U4_B_
#endif /* CORE_TEENSY */
#endif /* __AVR_ATmega32U4__ */

// Due
#ifdef __SAM3X8E__
#define __ARM__
#define CPU_ARCH _ARM_
#define CHIPSET _SAM3X8E_
#define CHIP _SAM3X8E_
#endif /* __SAM3X8E__ */

// M0系統は不明


// ルネサスのGRシリーズは後で対応
// GR sakura
//#ifdef __RX__
//#define CPU __RX__
//#endif /* __RX__ */


// TIのランチパッドもそのうちやりたい

//#elif defined(__SAM3X8E__)
//    #include <Arduino.h>
//    #define _ARDUINO_DUE_ 1
//#elif defined(__RX__)
//    #include <rxduino.h>
//    #define _GR_SAKURA_ 1
//#elif defined(__RL78__)
//    #include <RLduino78.h>
//    #define _GR_KURUMI_ 1
//#else
//    #error unknown target.
//#endif


// ESP8266はとりあえず，generic8266のみ
#ifdef ESP8266
#define CPU_ARCH _ESP_
#define CHIPSET _ESP16_
#define CHIP _ESP8266_
#endif /* ESP8266 */

// ESP32もそのうちやりたい

// もしなにも定義されていない場合は
#ifndef CPU_ARCH
#define CPU_ARCH _UNKNOWN_
#endif /* CPU_ARCH */

#ifndef CHIPSET
#define CHIPSET _UNKNOWN_
#endif /* CHIPSET */

#ifndef CHIP
#define CHIP _UNKNOWN_
#endif /* CHIP */


/*
 * 個別の機種の定義
 */

/*
 * Uno系列
 */
// Uno
#ifdef ARDUINO_AVR_UNO
#define HARDWARE _ARDUINO_AVR_UNO_
#define HARDWARE_TYPE _ARDUINO_AVR_UNO_
#endif /* ARDUINO_AVR_UNO */

// Duemilanove/Diecimila (Unoと同じ)
#ifdef ARDUINO_AVR_DUEMILANOVE
#define HARDWARE _ARDUINO_AVR_DUEMILANOVE_
#define HARDWARE_TYPE _ARDUINO_AVR_UNO_
#endif /* ARDUINO_AVR_DUEMILANOVE */

// Leonardo
#ifdef ARDUINO_AVR_LEONARDO
#define HARDWARE _ARDUINO_AVR_LEONARDO_
#define HARDWARE_TYPE _ARDUINO_AVR_UNO_
#endif /* ARDUINO_AVR_LEONARDO */

// Yun
#ifdef ARDUINO_AVR_YUN
#define HARDWARE _ARDUINO_AVR_YUN_
#define HARDWARE_TYPE _ARDUINO_AVR_UNO_
#endif /* ARDUINO_AVR_YUN */

// Ethernet
#ifdef ARDUINO_AVR_ETHERNET
#define HARDWARE _ARDUINO_AVR_ETHERNET_
#define HARDWARE_TYPE _ARDUINO_AVR_UNO_
#endif /* ARDUINO_AVR_ETHERNET */

// BT
#ifdef ARDUINO_AVR_BT
#define HARDWARE _ARDUINO_AVR_BT_
#define HARDWARE_TYPE _ARDUINO_AVR_UNO_
#endif /* ARDUINO_AVR_BT */

// ZERO
#ifdef ARDUINO_SAMD_ZERO
#define HARDWARE _ARDUINO_SAMD_ZERO_
#define HARDWARE_TYPE _ARDUINO_AVR_UNO_
#endif /* ARDUINO_SAMD_ZERO */

/*
 * Unoの系統だけどよくわからないもの
 */
// NG/older
#ifdef ARDUINO_AVR_NG
#define HARDWARE _ARDUINO_AVR_NG_
#define HARDWARE_TYPE _UNKNOWN_
#endif /* ARDUINO_AVR_NG */

/*
 * Mega系列
 */
// MEGA2560
#ifdef ARDUINO_AVR_MEGA2560
#define HARDWARE _ARDUINO_AVR_MEGA2560_
#define HARDWARE_TYPE _ARDUINO_AVR_MEGA_
#endif /* ARDUINO_AVR_MEGA2560 */


// MEGA1280
#ifdef ARDUINO_AVR_MEGA
#define HARDWARE _ARDUINO_AVR_MEGA_
#define HARDWARE_TYPE _ARDUINO_AVR_MEGA_
#endif /* ARDUINO_AVR_MEGA */

// Mega ADK
#ifdef ARDUINO_AVR_ADK
#define HARDWARE _ARDUINO_AVR_ADK_
#define HARDWARE_TYPE _ARDUINO_AVR_MEGA_
#endif /* ARDUINO_AVR_ADK */

// DUE
#ifdef ARDUINO_SAM_DUE
#define HARDWARE _ARDUINO_SAM_DUE_
#define HARDWARE_TYPE _ARDUINO_AVR_MEGA_
#endif /* ARDUINO_SAM_DUE */

/*
 * Miniの系統
 */
// Mini
#ifdef ARDUINO_AVR_MINI
#define HARDWARE _ARDUINO_AVR_MINI_
#define HARDWARE_TYPE _ARDUINO_AVR_MINI_
#endif /* ARDUINO_AVR_MINI */

// Pro/Pro Mini (proとprominiは自動で識別できないので，pro miniにあわせる)
#ifdef ARDUINO_AVR_PRO
#define HARDWARE _ARDUINO_AVR_PRO_
#define HARDWARE_TYPE _ARDUINO_AVR_PRO_
#endif /* ARDUINO_AVR_PRO */

// Nano
#ifdef ARDUINO_AVR_NANO
#define HARDWARE _ARDUINO_AVR_NANO_
#define HARDWARE_TYPE _ARDUINO_AVR_MINI_
#endif /* ARDUINO_AVR_NANO */

// Fio
#ifdef ARDUINO_AVR_FIO
#define HARDWARE _ARDUINO_AVR_FIO_
#define HARDWARE_TYPE _ARDUINO_AVR_MINI_
#endif /* ARDUINO_AVR_FIO */

/*
 * 独自系列
 */
// Micro
#ifdef ARDUINO_AVR_MICRO
#define HARDWARE _ARDUINO_AVR_MICRO_
#define HARDWARE_TYPE _UNKNOWN_
#endif /* ARDUINO_AVR_MICRO */

// Teensy (いろんな種類がありすぎて，定義困難)
#ifdef CORE_TEENSY
#define HARDWARE _CORE_TEENSY_
#define HARDWARE_TYPE _UNKNOWN_
#endif /* CORE_TEENSY */

// Esplora
#ifdef ARDUINO_AVR_ESPLORA
#define HARDWARE _ARDUINO_AVR_ESPLORA_
#define HARDWARE_TYPE _UNKNOWN_
#endif /* ARDUINO_AVR_ESPLORA */

// Gemma
#ifdef ARDUINO_AVR_GEMMA
#undef CHIP
#undef CHIPSET
#define CHIP _AT_TINY_85_
#define CHIPSET _AT_TINY_
#define HARDWARE _ARDUINO_AVR_GEMMA_
#define HARDWARE_TYPE _UNKNOWN_
#endif /* ARDUINO_AVR_GEMMA */


// Robot Control (よくわからない)
#ifdef ARDUINO_AVR_ROBOT_CONTROL
#define HARDWARE _ARDUINO_AVR_ROBOT_CONTROL_
#define HARDWARE_TYPE _UNKNOWN_
#endif /* ARDUINO_AVR_ROBOT_CONTROL */

// Robot Motor (よくわからない)
#ifdef ARDUINO_AVR_ROBOT_MOTOR
#define HARDWARE _ARDUINO_AVR_ROBOT_MOTOR_
#define HARDWARE_TYPE _UNKNOWN_
#endif /* ARDUINO_AVR_ROBOT_MOTOR */


// Generic ESP8266 Module
#ifdef ARDUINO_ESP8266_ESP01
#define NO_SERIAL_RESET
#define HARDWARE _ARDUINO_ESP8266_ESP01_
#define HARDWARE_TYPE _UNKNOWN_
#endif /* ARDUINO_ESP8266_ESP01 */

// 未定義
#ifndef HARDWARE
#define HARDWARE _UNKNOWN_
#endif /* HARDWARE */

#ifndef HARDWARE_TYPE
#define HARDWARE_TYPE _UNKNOWN_
#endif /* HARDWARE_TYPE */


/*
 * 各ハードのピン等の特性の定義
 */


/*
 * 代表的なハードウェアの定義
 */

/*
 * UNO (Rev.3をベースに定義しています)
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 6
 * PMW         : D3,D5,D6,D9,D10,D11
 * I2C SDA     : A4
 * I2C SCL     : A5
 * SPI MOSI    : D11
 * SPI MISO    : D12
 * SPI SCK     : D13
 * SPI SS      : D10
 * 内蔵LED     : D13
 */

#if HARDWARE_TYPE == _ARDUINO_AVR_UNO_
#define HARDWARE_NAME "ARDUINO_AVR_UNO"
#define HARDWARE_VOLTAGE 50
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
#endif /* _ARDUINO_AVR_UNO_ */


/*
 * Mega (Rev.3をベースに定義しています)
 * 動作電圧    : 5V
 * MAX_SERIAL  : 4
 * MAX_DIGITAL : 54
 * MAX_ANALOG  : 16
 * PMW         : D2 - D13, D44 - D46
 * I2C SDA     : D20
 * I2C SCL     : D21
 * SPI MOSI    : D51
 * SPI MISO    : D50
 * SPI SCK     : D52
 * SPI SS      : D53
 * 内蔵LED     : D13
 */
#if HARDWARE_TYPE == _ARDUINO_AVR_MEGA_
#define HARDWARE_NAME "ARDUINO_AVR_MEGA"
#define HARDWARE_VOLTAGE 50
#define MAX_SERIAL 4
#define MAX_DIGITAL 54
#define MAX_ANALOG 16
#define PMW_PORTS {2,3,4,5,6,7,8.9.10,11,12,13,44,45,46}
#define I2C_SDA 20
#define I2C_SCL 21
#define SPI_MOSI 51
#define SPI_MISO 50
#define SPI_SCK 52
#define SPI_SS 53
#define ONBOARD_LED 13
#endif /* _ARDUINO_AVR_MEGA_ */

/*
 * Mini
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 8
 * PMW         : D3,D5,D6,D9,D10,D12
 * I2C SDA     : A4
 * I2C SCL     : A5
 * SPI MOSI    : D11
 * SPI MISO    : D12
 * SPI SCK     : D13
 * SPI SS      : D10
 * 内蔵LED     : なし?
 */

// Mini
#if HARDWARE_TYPE == _ARDUINO_AVR_MINI_
#define HARDWARE_NAME "ARDUINO_AVR_MINI"
#define HARDWARE_VOLTAGE 50
#define MAX_SERIAL 1
#define MAX_DIGITAL 20
#define MAX_ANALOG 8
#define PMW_PORTS {3,5,6,9.10,12}
#define I2C_SDA A4
#define I2C_SCL A5
#define SPI_MOSI 11
#define SPI_MISO 12
#define SPI_SCK 13
#define SPI_SS 10
#define ONBOARD_LED _UNKNOWN_
#endif /* _ARDUINO_AVR_MINI_ */

/*
 * 個別のハードウェアの定義
 * 典型的なハードウェアとの差分だけを定義
 */
/*
 * Uno系列
 */

/*
 * Leonardo
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 6→12
 * PMW         : D3,D5,D6,D9,D10,D11→D3,D5,D6,D9-D13
 * I2C SDA     : A4→D2
 * I2C SCL     : A5→D3
 * SPI MOSI    : D11→SPIは他のピンとのかぶりはなし
 * SPI MISO    : D12→SPIは他のピンとのかぶりはなし
 * SPI SCK     : D13→SPIは他のピンとのかぶりはなし
 * SPI SS      : D10→SPIは他のピンとのかぶりはなし
 * 内蔵LED     : D13
 */
#if HARDWARE == _ARDUINO_AVR_LEONARDO_
#define HARDWARE_NAME "ARDUINO_AVR_LEONARDO"
#undef MAX_ANALOG
#undef PMW_PORTS
#undef I2C_SDA
#undef I2C_SCL
#undef SPI_MOSI
#undef SPI_MISO
#undef SPI_SCK
#undef SPI_SS
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define SPI_MOSI _UNKNOWN_
#define SPI_MISO _UNKNOWN_
#define SPI_SCK _UNKNOWN_
#define SPI_SS _UNKNOWN_
#define NO_SERIAL_RESET
#endif /* _ARDUINO_AVR_LEONARDO_ */


/*
 * Yun
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 6 →12
 * PMW         : D3,D5,D6,D9,D10,D11 → D3,D5,D6,D9,D10,D11,D12,D13
 * I2C SDA     : A4 → D2
 * I2C SCL     : A5 → D3
 * SPI MOSI    : D11 → なし
 * SPI MISO    : D12 → なし
 * SPI SCK     : D13 → なし
 * SPI SS      : D10 → なし
 * 内蔵LED     : D13
 */

// Yun
#if HARDWARE == _ARDUINO_AVR_YUN_
#define HARDWARE_NAME "ARDUINO_AVR_YUN"
#undef MAX_ANALOG
#undef PMW_PORTS
#undef I2C_SDA
#undef I2C_SCL
#undef SPI_MOSI
#undef SPI_MISO
#undef SPI_SCK
#undef SPI_SS
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,10,11,12,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define SPI_MOSI _UNKNOWN_
#define SPI_MISO _UNKNOWN_
#define SPI_SCK _UNKNOWN_
#define SPI_SS _UNKNOWN_
#endif /* _ARDUINO_AVR_YUN_ */

/*
 * Arduino Ethernet
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 6
 * PMW         : D3,D5,D6,D9,D10,D11
 * I2C SDA     : A4
 * I2C SCL     : A5
 * SPI MOSI    : D11
 * SPI MISO    : D12
 * SPI SCK     : D13
 * SPI SS      : D10
 * 内蔵LED     : D13
 */

// Ethernet
#if HARDWARE_TYPE == _ARDUINO_AVR_ETHERNET_
#define HARDWARE_NAME "ARDUINO_AVR_ETHERNET"
// たぶん差分はないはずなので，なにも定義しない
#endif /* _ARDUINO_AVR_ETHERNET_ */


/*
 * BT
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 6
 * PMW         : D3,D5,D6,D9,D10,D11
 * I2C SDA     : A4
 * I2C SCL     : A5
 * SPI MOSI    : D11
 * SPI MISO    : D12
 * SPI SCK     : D13
 * SPI SS      : D10
 * 内蔵LED     : D13
 * BTモジュールのリセット(追加)  : D7 ?
 */

// BT
#if HARDWARE_TYPE == _ARDUINO_AVR_BT_
#define HARDWARE_NAME "ARDUINO_AVR_BT"
#define RESET_BT 7
#endif /* _ARDUINO_AVR_BT_ */

/*
 * M0/M0 Pro
 * 動作電圧    : 5 → 3.3V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20 → 16
 * MAX_ANALOG  : 6
 * PMW         : D3,D5,D6,D9,D10,D11 → D2-D13
 * I2C SDA     : A4 → D20
 * I2C SCL     : A5 → D21
 * SPI MOSI    : D11
 * SPI MISO    : D12
 * SPI SCK     : D13
 * SPI SS      : D10
 * 内蔵LED     : D13
 */

// ZERO
#if HARDWARE_TYPE == _ARDUINO_SAMD_ZERO_
#define HARDWARE_NAME "ARDUINO_SAMD_ZERO"
#undef HARDWARE_VOLTAGE
#define HARDWARE_VOLTAGE 33
#undef MAX_DIGITAL
#define MAX_DIGITAL 16
#undef PMW_PORTS
#undef I2C_SDA
#undef I2C_SCL
#define PMW_PORTS {2,3,4,5,6,7,8,9,10,11,12,13}
#define I2C_SDA 20
#define I2C_SCL 21
#endif /* _ARDUINO_SAMD_ZERO_ */

/*
 * Mega系列
 */
/*
 * Due
 * 動作電圧    : 5 → 3.3V
 * MAX_SERIAL  : 4
 * MAX_DIGITAL : 54 → 71
 * MAX_ANALOG  : 16 → 12
 * PMW         : D2 - D13, D44 - D46  → D2 - D13
 * I2C SDA     : D20 → D20 + D70
 * I2C SCL     : D21 → D21 + D71
 * SPI MOSI    : D51 → なし(未定義?)
 * SPI MISO    : D50 → なし(未定義?)
 * SPI SCK     : D52 → なし(未定義?)
 * SPI SS      : D53 → なし(未定義?)
 * 内蔵LED     : D13
 */

// DUE
#if HARDWARE_TYPE == _ARDUINO_SAM_DUE_
#define HARDWARE_NAME "ARDUINO_SAM_DUE"
#undef HARDWARE_VOLTAGE
#define HARDWARE_VOLTAGE 33
#undef MAX_DIGITAL
#define MAX_DIGITAL 71
#undef MAX_ANALOG
#define MAX_ANALOG 12
#undef PMW_PORTS
#define PMW_PORTS {2,3,4,5,6,7,8,9,10,11,12,13}
#define I2C_SDA1 70
#define I2C_SCL1 71
#undef SPI_MOSI
#undef SPI_MISO
#undef SPI_SCK
#undef SPI_SS
#define SPI_MOSI _UNKNOWN_
#define SPI_MISO _UNKNOWN_
#define SPI_SCK _UNKNOWN_
#define SPI_SS _UNKNOWN_
#endif /* _ARDUINO_SAM_DUE_ */

/*
 * Miniの系統
 */
/*
 * Pro/Pro Mini (proとprominiは自動で識別できないので，pro miniにあわせる)
 * Pro Mini
 * 動作電圧    : 5V → 3.3と5と両方あるので不明
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

// Pro Mini
#if HARDWARE_TYPE == _ARDUINO_AVR_PRO_
#define HARDWARE_NAME "ARDUINO_AVR_PRO"
#undef HARDWARE_VOLTAGE
#define HARDWARE_VOLTAGE _UNKNOWN_
#undef PMW_PORTS
#define PMW_PORTS {3,5,6,9,10,11}
#undef ONBOARD_LED
#define ONBOARD_LED 13
#endif /* _ARDUINO_AVR_MINI_ */

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

// Nano
#if HARDWARE_TYPE == _ARDUINO_AVR_NANO_
#define HARDWARE_NAME "ARDUINO_AVR_NANO"
#undef PMW_PORTS
#define PMW_PORTS {3,5,6,9,10,11}
#undef ONBOARD_LED
#define ONBOARD_LED 13
#endif /* _ARDUINO_AVR_NANO_ */

/*
 * Fio
 * 動作電圧    : 5V → 3.3V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 20
 * MAX_ANALOG  : 8
 * PMW         : D3,D5,D6,D9,D10,D12 → D3,D5,D6,D9,D11,D13
 * I2C SDA     : A4
 * I2C SCL     : A5
 * SPI MOSI    : D11
 * SPI MISO    : D12
 * SPI SCK     : D13 → D10
 * SPI SS      : D10 → D13
 * 内蔵LED     : なし?
 */

// Fio
#if HARDWARE_TYPE == _ARDUINO_AVR_FIO_
#define HARDWARE_NAME "ARDUINO_AVR_FIO"
#undef HARDWARE_VOLTAGE
#define HARDWARE_VOLTAGE _UNKNOWN_
#undef PMW_PORTS
#define PMW_PORTS {3,5,6,9,11,13}
#undef SPI_SCK
#define SPI_SCK 13
#undef SPI_SS
#define SPI_SS 10
#endif /* _ARDUINO_AVR_FIO_ */

/*
 * 独自系列
 */
/*
 * Micro
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 14
 * MAX_ANALOG  : 12
 * PMW         : D3,D5,D6,D9,D10,D11,D12,D13
 * I2C SDA     : D2
 * I2C SCL     : D3
 * SPI MOSI    : 専用
 * SPI MISO    : 専用
 * SPI SCK     : 専用
 * SPI SS      : 専用
 * 内蔵LED     : D13
 */
// Micro
#if HARDWARE_TYPE == _ARDUINO_AVR_MICRO_
#define HARDWARE_NAME "ARDUINO_AVR_MICRO"
#define HARDWARE_VOLTAGE 50
#define MAX_SERIAL 1
#define MAX_DIGITAL 14
#define MAX_ANALOG 12
#define PMW_PORTS {3,5,6,9,10,11,12,13}
#define I2C_SDA 2
#define I2C_SCL 3
#define SPI_MOSI _UNKNOWN_
#define SPI_MISO _UNKNOWN_
#define SPI_SCK _UNKNOWN_
#define SPI_SS _UNKNOWN_
#define ONBOARD_LED 13
#endif /* _ARDUINO_AVR_MICRO_ */

/*
 * Esplora
 * 動作電圧    : 5V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 9
 * MAX_ANALOG  : 1
 * PMW         : D3,D5,D6,D9,D10,D11
 * I2C SDA     : 不明
 * I2C SCL     : D11
 * SPI MOSI    : D16
 * SPI MISO    : D14
 * SPI SCK     : D15
 * SPI SS      : なし (独立ピン)
 * 内蔵LED     : D13
 */

// Esplora
#if HARDWARE_TYPE == _ARDUINO_AVR_ESPLORA_
#define HARDWARE_NAME "ARDUINO_AVR_ESPLORA"
#define HARDWARE_VOLTAGE 50
#define MAX_SERIAL 1
#define MAX_DIGITAL 9
#define MAX_ANALOG 1
#define PMW_PORTS {3,5,6,9,10,11}
#define I2C_SDA _UNKNOWN_
#define I2C_SCL 11
#define SPI_MOSI 16
#define SPI_MISO 14
#define SPI_SCK 15
#define SPI_SS _UNKNOWN_
#define ONBOARD_LED 13
#endif /* _ARDUINO_AVR_ESPLORA_ */

/*
 * Gemma
 * 動作電圧    : 3.3V
 * MAX_SERIAL  : 1
 * MAX_DIGITAL : 3
 * MAX_ANALOG  : 3
 * PMW         : D0, D1
 * I2C SDA     : D0
 * I2C SCL     : D2
 * SPI MOSI    : D1
 * SPI MISO    : D0
 * SPI SCK     : D2
 * SPI SS      : なし
 * 内蔵LED     : D1
 */

// Gemma
#if HARDWARE_TYPE == _ARDUINO_AVR_GEMMA_
#define HARDWARE_NAME "ARDUINO_AVR_GEMMA"
#define HARDWARE_VOLTAGE 33
#define MAX_SERIAL 1
#define MAX_DIGITAL 3
#define MAX_ANALOG 3
#define PMW_PORTS {0,1}
#define I2C_SDA 0
#define I2C_SCL 2
#define SPI_MOSI 1
#define SPI_MISO 0
#define SPI_SCK 2
#define SPI_SS _UNKNOWN_
#define ONBOARD_LED 1
#endif /* _ARDUINO_AVR_GEMMA_ */

/*
 * 便利マクロ
 */
/*
 * シリアルポートのオープンでリセットがかからない機器への対応策
 */
#ifdef NO_SERIAL_RESET
#define waitForSerial() while(!Serial)
#else /* NO_SERIAL_RESET */
#define waitForSerial()
#endif /* NO_SERIAL_RESET */


#endif /* __DETECT_HARDWARE_H__ */
