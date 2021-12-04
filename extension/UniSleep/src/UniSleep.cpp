
#include "UniSleep.h"

UniSleep::UniSleep(void) {
  _sleep_mode=_UNSUPPORTED_MODE_;
#if CPU_ARCH!=AVR_ARCH /* AVR */
  _sleepDuration=0;
#endif /* CPU_ARCH!=AVR_ARCH */
#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
  uart_num=-1;
  ulp_wakeup=false;
  touchpad_wakeup=false;
  gpio_wakeup=false;
  wifi_wakeup=false;
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */
}


#if CPU_ARCH!=XTENSA_LX106_ARCH /* ESP8266 */
int UniSleep::SetSleepMode(int mode) {
  if (mode == _UNSUPPORTED_MODE_) return _UNSUPPORTED_MODE_;
  switch(mode) {
#if MODE_IDLE     != _UNSUPPORTED_MODE_
    case MODE_IDLE:
#endif
#if MODE_ADC      != _UNSUPPORTED_MODE_
    case MODE_ADC:
#endif
#if MODE_PWR_SAVE != _UNSUPPORTED_MODE_
    case MODE_PWR_SAVE:
#endif
#if MODE_STANDBY  != _UNSUPPORTED_MODE_
    case MODE_STANDBY:
#endif
#if MODE_PWR_DOWN != _UNSUPPORTED_MODE_
    case MODE_PWR_DOWN:
#endif
      _sleep_mode=mode;
      break;
    default:
      return _UNSUPPORTED_MODE_;
  }
#if (CPU_ARCH==SAMD_ARCH) || (CPU_ARCH==XTENSA_LX6_ARCH) /* MKR, Zero  or ESP32 */
  _sleepDuration=0;
#endif /* CPU_ARCH==SAMD_ARCH || CPU_ARCH==XTENSA_LX6_ARCH */
  return 0;
}
#endif /* CPU_ARCH!=XTENSA_LX106_ARCH */


#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
int UniSleep::SetSleepMode(int mode, uint32_t duration, int num, bool ulp, bool pad, bool gpio, bool wifi) {
  if (mode == _UNSUPPORTED_MODE_) return _UNSUPPORTED_MODE_;
  switch(mode) {
#if MODE_IDLE     != _UNSUPPORTED_MODE_
    case MODE_IDLE:
#endif
#if MODE_ADC      != _UNSUPPORTED_MODE_
    case MODE_ADC:
#endif
#if MODE_PWR_SAVE != _UNSUPPORTED_MODE_
    case MODE_PWR_SAVE:
#endif
#if MODE_STANDBY  != _UNSUPPORTED_MODE_
    case MODE_STANDBY:
#endif
#if MODE_PWR_DOWN != _UNSUPPORTED_MODE_
    case MODE_PWR_DOWN:
#endif
      _sleep_mode=mode;
      break;
    default:
      return _UNSUPPORTED_MODE_;
  }
  if ((_sleep_mode!=MODE_PWR_DOWN) && (gpio)) {
    _sleep_mode=_UNSUPPORTED_MODE_;
    return _UNSUPPORTED_MODE_;
  }
  if ((_sleep_mode!=MODE_PWR_DOWN) && (num>=0)) {
    _sleep_mode=_UNSUPPORTED_MODE_;
    return _UNSUPPORTED_MODE_;
  }
  if ((_sleep_mode!=MODE_PWR_DOWN) && (wifi)) {
    _sleep_mode=_UNSUPPORTED_MODE_;
    return _UNSUPPORTED_MODE_;
  }
  uart_num=num;
  ulp_wakeup=ulp;
  touchpad_wakeup=pad;
  gpio_wakeup=gpio;
  wifi_wakeup=wifi;
  _sleepDuration=duration;
  return 0;
}
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */

#if (CPU_ARCH==SAMD_ARCH) || (CPU_ARCH==XTENSA_LX6_ARCH) /* MKR, Zero  or ESP32 */
int UniSleep::SetSleepMode(int mode, uint32_t duration) {
  if (mode == _UNSUPPORTED_MODE_) return _UNSUPPORTED_MODE_;
  switch(mode) {
#if MODE_IDLE     != _UNSUPPORTED_MODE_
    case MODE_IDLE:
#endif
#if MODE_ADC      != _UNSUPPORTED_MODE_
    case MODE_ADC:
#endif
#if MODE_PWR_SAVE != _UNSUPPORTED_MODE_
    case MODE_PWR_SAVE:
#endif
#if MODE_STANDBY  != _UNSUPPORTED_MODE_
    case MODE_STANDBY:
#endif
#if MODE_PWR_DOWN != _UNSUPPORTED_MODE_
    case MODE_PWR_DOWN:
#endif
      _sleep_mode=mode;
      break;
    default:
      return _UNSUPPORTED_MODE_;
  }
  _sleepDuration=duration;
  return 0;
}
#endif /* CPU_ARCH==SAMD_ARCH || CPU_ARCH==XTENSA_LX6_ARCH */

#if CPU_ARCH==XTENSA_LX106_ARCH /* ESP8266 */
int UniSleep::SetSleepMode(uint64_t duration){
  _sleepDuration=duration;
  return 0;
}
int UniSleep::SetSleepMode(uint8_t mode, uint64_t duration){
  switch(mode){
    case WAKE_RF_DEFAULT:
    case WAKE_RFCAL:
    case WAKE_NO_RFCAL:
    case WAKE_RF_DISABLED:
      break;
    default: return _UNSUPPORTED_MODE_;
  }
  _sleepDuration=duration;
  _sleep_mode=mode;
  return 0;
}
#endif /* CPU_ARCH==XTENSA_LX106_ARCH */


bool UniSleep::Sleep(void) {
#if CPU_ARCH==AVR_ARCH
  delay(100);

  power_adc_disable();
  power_spi_disable();
  power_timer0_disable();
  power_twi_disable();

  set_sleep_mode(_sleep_mode);
  cli();

  sleep_enable();
  sei();
  sleep_cpu();
  sleep_disable();

  power_all_enable();
  return true;
#endif /* CPU_ARCH==AVR_ARCH */

#if CPU_ARCH==SAMD_ARCH /* MKR, Zero */
  switch(_sleep_mode) {
    case MODE_IDLE:
      Serial.print("_sleepDuration=");Serial.println(_sleepDuration);
      if (_sleepDuration==0) {
        LowPower.idle();
      } else {
        Serial.println("go to sleep");
        LowPower.idle(_sleepDuration);
      }
      Serial.println("wake up");
      break;
#ifdef BOARD_HAS_COMPANION_CHIP
    case MODE_PWR_SAVE:
      LowPower.companionSleep();
#endif /* BOARD_HAS_COMPANION_CHIP */
    case MODE_STANDBY:
      if (_sleepDuration==0) {
        LowPower.sleep();
      } else {
        LowPower.sleep(_sleepDuration);
      }
      break;
    case MODE_PWR_DOWN:
      if (_sleepDuration==0) {
        LowPower.deepSleep();
      } else {
        LowPower.deepSleep(_sleepDuration);
      }
  }
  return true;
#endif /* CPU_ARCH==SAMD_ARCH */

#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
  esp_err_t rst;
  if (ulp_wakeup) {
    rst=esp_sleep_enable_ulp_wakeup();
    if ((rst!=ESP_ERR_NOT_SUPPORTED) && (rst!=ESP_OK)) return false;
  }
  if (touchpad_wakeup) {
    rst=esp_sleep_enable_touchpad_wakeup();
    if ((rst!=ESP_ERR_NOT_SUPPORTED) && (rst!=ESP_OK)) return false;
  }
  if (gpio_wakeup) {
    rst=esp_sleep_enable_gpio_wakeup();
    if ((rst!=ESP_ERR_NOT_SUPPORTED) && (rst!=ESP_OK)) return false;
  }
  if (uart_num>=0) {
    rst=esp_sleep_enable_uart_wakeup(uart_num);
    if ((rst!=ESP_ERR_NOT_SUPPORTED) && (rst!=ESP_OK)) return false;
  }
  if (wifi_wakeup) {
    rst=esp_sleep_enable_wifi_wakeup();
    if ((rst!=ESP_ERR_NOT_SUPPORTED) && (rst!=ESP_OK)) return false;
  } else {
    rst=esp_sleep_disable_wifi_wakeup();
    if ((rst!=ESP_ERR_NOT_SUPPORTED) && (rst!=ESP_OK)) return false;
  }
  switch(_sleep_mode) {
    case MODE_STANDBY:
      if (_sleepDuration==0) {
        esp_light_sleep_start();
      } else {
        esp_sleep_enable_timer_wakeup(_sleepDuration);
        esp_light_sleep_start();
      }
      break;
    case MODE_PWR_DOWN:
      if (_sleepDuration==0) {
        esp_deep_sleep_start();
      } else {
        esp_sleep_enable_timer_wakeup(_sleepDuration);
        esp_deep_sleep_start();
      }
  }
  return true;
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */
#if CPU_ARCH==XTENSA_LX106_ARCH /* ESP8266 */
  if (_sleep_mode==_UNSUPPORTED_MODE_){
    ESP.deepSleep(_sleepDuration);
  } else {
    ESP.deepSleep(_sleepDuration,(RFMode) _sleep_mode);
  }
#endif /* CPU_ARCH==XTENSA_LX106_ARCH */
}

#if CPU_ARCH==AVR_ARCH
bool UniSleep::SetInterrupt(uint32_t pin, void (*userFunc)(void), uint32_t mode) {
  if ((LOW!=mode) && (CHANGE!=mode) && (RISING!=mode) && (FALLING!=mode)) return false;
  if (NOT_AN_INTERRUPT==digitalPinToInterrupt(pin)) return false;
  attachInterrupt(digitalPinToInterrupt(pin), userFunc, mode);
  return true;
}
#endif /* CPU_ARCH==AVR_ARCH */

#if CPU_ARCH==SAMD_ARCH
bool UniSleep::SetInterrupt(uint32_t pin, void (*userFunc)(void), irq_mode mode) {
  if ((LOW!=mode) && (CHANGE!=mode) && (RISING!=mode) && (FALLING!=mode) && (HIGH!=mode)) return false;
  LowPower.attachInterruptWakeup(pin,  userFunc, mode);
  return true;
}
#endif /* CPU_ARCH==SAMD_ARCH */

#if CPU_ARCH==SAMD_ARCH
bool UniSleep::SetInterrupt(uint32_t pin, voidFuncPtr callback, adc_interrupt mode, uint16_t lo, uint16_t hi) {
  LowPower.attachAdcInterrupt( pin,  callback,  mode,  lo,  hi);
  return true;
}
#endif /* CPU_ARCH==SAMD_ARCH */

#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
bool UniSleep::SetInterrupt(gpio_num_t pin, int level) {
  if ((level!=HIGH) && (level!=LOW)) return false;
  //if (checkPinNumber(pin)) {
  if (esp_sleep_is_valid_wakeup_gpio(pin)) {
    if (ESP_OK == esp_sleep_enable_ext0_wakeup(pin, level)) return true;
  };
  return false;
}

bool UniSleep::SetInterrupt(uint64_t mask, esp_sleep_ext1_wakeup_mode_t level) {
  if ((level!=ESP_EXT1_WAKEUP_ALL_LOW) && (level!=ESP_EXT1_WAKEUP_ANY_HIGH)) return false;
  if (ESP_OK == esp_sleep_enable_ext1_wakeup(mask, level)) return true;
  return false;
}
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */


#if CPU_ARCH==AVR_ARCH
bool UniSleep::UnSetInterrupt(uint32_t pin){
  if (NOT_AN_INTERRUPT==digitalPinToInterrupt(pin)) return false;
  detachInterrupt(digitalPinToInterrupt(pin));
  return true;
}
#endif /* CPU_ARCH==AVR_ARCH */

#if CPU_ARCH==SAMD_ARCH
bool UniSleep::UnSetInterrupt(void) {
  LowPower.detachAdcInterrupt();
  return true;
}
bool UniSleep::UnSetInterrupt(uint32_t pin){
  detachInterrupt(digitalPinToInterrupt(pin));
  return false;
}
#endif /* CPU_ARCH==SAMD_ARCH */

#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
bool UniSleep::UnSetInterrupt(esp_sleep_source_t source) {
  if (ESP_OK==esp_sleep_disable_wakeup_source(source)) return true;
  return false;
}

esp_sleep_wakeup_cause_t UniSleep::WakeupReason(void){
  return esp_sleep_get_wakeup_cause();
}
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */
