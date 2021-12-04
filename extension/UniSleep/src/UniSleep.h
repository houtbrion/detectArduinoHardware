#ifndef __UNI_SLEEP_H__
#define __UNI_SLEEP_H__

#include "detectArduinoHardware.h"


#define _UNSUPPORTED_MODE_ -1

#if CPU_ARCH==AVR_ARCH /* AVR */
#include <avr/sleep.h>
#include <avr/power.h>
#define MODE_IDLE     SLEEP_MODE_IDLE
#define MODE_ADC      SLEEP_MODE_ADC
#define MODE_PWR_SAVE SLEEP_MODE_PWR_SAVE
#define MODE_STANDBY  SLEEP_MODE_STANDBY
#define MODE_PWR_DOWN SLEEP_MODE_PWR_DOWN
#endif /* CPU_ARCH==AVR_ARCH */

#if CPU_ARCH==SAMD_ARCH /* MKR, Zero */
#include <ArduinoLowPower.h>
#define MODE_IDLE     1  /* idle() in ArduinoLowPower.h */
#define MODE_ADC      _UNSUPPORTED_MODE_
#ifdef BOARD_HAS_COMPANION_CHIP
#define MODE_PWR_SAVE 3  /* companionSleep() */
#else /* BOARD_HAS_COMPANION_CHIP */
#define MODE_PWR_SAVE _UNSUPPORTED_MODE_
#endif /* BOARD_HAS_COMPANION_CHIP */
#define MODE_STANDBY  4  /* sleep(void)      */
#define MODE_PWR_DOWN 5  /* deepSleep(void)  */
#endif /* CPU_ARCH==SAMD_ARCH */

#if CPU_ARCH==SAM_ARCH /* Due */
#endif /* CPU_ARCH==SAM_ARCH */

#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
#define MODE_IDLE     _UNSUPPORTED_MODE_
#define MODE_ADC      _UNSUPPORTED_MODE_
#define MODE_PWR_SAVE _UNSUPPORTED_MODE_
#define MODE_STANDBY  4
#define MODE_PWR_DOWN 5
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */

#if CPU_ARCH==XTENSA_LX106_ARCH /* ESP8266 */

#endif /* CPU_ARCH==XTENSA_LX106_ARCH */

/*
 * 
 */



class UniSleep {
  public:
    UniSleep(void);
    bool Sleep(void);
#if CPU_ARCH!=XTENSA_LX106_ARCH /* ESP8266 */
    int SetSleepMode(int);
#endif /* CPU_ARCH!=XTENSA_LX106_ARCH */
#if CPU_ARCH==XTENSA_LX106_ARCH /* ESP8266 */
    int SetSleepMode(uint64_t);
    int SetSleepMode(uint8_t, uint64_t);
#endif /* CPU_ARCH==XTENSA_LX106_ARCH */
#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
    int SetSleepMode(int , uint32_t, int , bool , bool , bool , bool);
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */
#if (CPU_ARCH==SAMD_ARCH) || (CPU_ARCH==XTENSA_LX6_ARCH) /* MKR, Zero  or ESP32 */
    int SetSleepMode(int, uint32_t);
#endif /* CPU_ARCH==SAMD_ARCH || CPU_ARCH==XTENSA_LX6_ARCH */
#if CPU_ARCH==AVR_ARCH
    bool SetInterrupt(uint32_t, void (*userFunc)(void), uint32_t);
    bool UnSetInterrupt(uint32_t);
#endif /* CPU_ARCH==AVR_ARCH */
#if CPU_ARCH==SAMD_ARCH
    bool SetInterrupt(uint32_t , voidFuncPtr, irq_mode mode);
    bool SetInterrupt(uint32_t , voidFuncPtr , adc_interrupt , uint16_t , uint16_t );
    bool UnSetInterrupt(void);
    bool UnSetInterrupt(uint32_t);
#endif /* CPU_ARCH==SAMD_ARCH */
#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
    bool SetInterrupt(gpio_num_t pin, int level);
    bool SetInterrupt(uint64_t mask, esp_sleep_ext1_wakeup_mode_t level);
    bool UnSetInterrupt(esp_sleep_source_t source);
    esp_sleep_wakeup_cause_t WakeupReason(void);
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */
  private:
    int _sleep_mode;

#if CPU_ARCH==XTENSA_LX106_ARCH /* ESP8266 */
    uint64_t _sleepDuration;
#else /* CPU_ARCH==XTENSA_LX106_ARCH */
    uint32_t _sleepDuration;
#endif /* CPU_ARCH==XTENSA_LX106_ARCH */

#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
    int uart_num;
    bool ulp_wakeup;
    bool touchpad_wakeup;
    bool gpio_wakeup;
    bool wifi_wakeup;
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */
};


#endif /* __UNI_SLEEP_H__ */
