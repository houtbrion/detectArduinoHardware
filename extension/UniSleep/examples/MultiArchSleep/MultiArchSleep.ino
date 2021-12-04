#include "UniSleep.h"

/*
 * 機種毎の設定
 */
// Mega
#if CPU_ARCH==AVR_ARCH /* AVR */
#define PIN_NUMBER 18 // スイッチのピン番号
#endif /* CPU_ARCH==AVR_ARCH */

// MKR WiFi 1010
#if CPU_ARCH==SAMD_ARCH /* MKR, Zero */
#define PIN_NUMBER 5  // スイッチのピン番号
#define MAX_DURATION 10000 // sleep duration in ms.
#endif /* CPU_ARCH==SAMD_ARCH */

// Due
#if CPU_ARCH==SAM_ARCH /* Due */
#define PIN_NUMBER 5  // スイッチのピン番号
#endif /* CPU_ARCH==SAM_ARCH */

// ESP32
#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
#define PIN_NUMBER GPIO_NUM_14  // EXT0割り込みを使う場合のピン番号 IO14
//#define PIN_MASK 0b100000000000000  // EXT1割り込みを使う場合の設定 ピン番号 IO14 (この行が有効な場合はEXT1を使う)
#define MAX_DURATION 10000000 // スリープ時間 (マイクロ秒)
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */

// ESP8266
#if CPU_ARCH==XTENSA_LX106_ARCH /* ESP8266 */
#define MAX_DURATION 10000000 // sleep duration in ms.
#define WIRELESS_STATUS WAKE_RF_DEFAULT
//#define WIRELESS_STATUS WAKE_RFCAL
//#define WIRELESS_STATUS WAKE_NO_RFCAL
//#define WIRELESS_STATUS WAKE_RF_DISABLED
#endif /* CPU_ARCH==XTENSA_LX106_ARCH */

#if CPU_ARCH!=XTENSA_LX106_ARCH /* ESP8266 */
#define INTERRUPT_NUM 1
#define INTERRUPT_EX 0
#endif /* CPU_ARCH!=XTENSA_LX106_ARCH */


/*
 * グローバル変数定義
 */
UniSleep helper;

#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
RTC_DATA_ATTR esp_sleep_wakeup_cause_t wakeup_reason;
#endif /* CPU_ARCH==XTENSA_LX6_ARCH */

/*
 * 割り込み関係機能 (ESP8266以外で利用)
 */
#if CPU_ARCH!=XTENSA_LX106_ARCH /* ESP8266 */
#if CPU_ARCH!=XTENSA_LX6_ARCH /* ESP32 */
/*
 * ESP32以外は割り込みの発生を自分で管理する必要があるため，ここを使う．
 */
bool intFlag[INTERRUPT_NUM];

void ExIntCallBack(void){
  intFlag[INTERRUPT_EX]=true;
}

void ClearInterruptFlag(void){
  for (int i=0;i<INTERRUPT_NUM;i++){
    intFlag[i]=false;
  }
}

uint32_t WakeUpReason(void){
  uint32_t rst=0;
  for (int i=0; i < INTERRUPT_NUM ; i++) {
    uint32_t mask= 1;
    if (i!=0) mask = mask << i;
    if (intFlag[i]){
      rst = rst | mask;
    }
    intFlag[i]=false;
  }
  return rst;
}
#else /* CPU_ARCH!=XTENSA_LX6_ARCH */
/*
 * ESP32は専用のAPIがあるため，それを使う．
 */
uint32_t WakeUpReason(void){
  return (uint32_t) helper.WakeupReason();
}
#endif/* CPU_ARCH!=XTENSA_LX6_ARCH */
#endif /* CPU_ARCH!=XTENSA_LX106_ARCH */

/*
 * コンソールでsleepのモードを選択する機能
 *   ESP8266は，スリープモードが1つしかないため，ここは不要．
 *   使えるモードだけを選択可能にするため，ifdefで切り替え．
 *   
 *   注意 : SAMDアーキの場合，Idle modeはSerial通信している時点で
 *   sleepから抜けてしまうため，スリープの確認は困難．
 */
#if CPU_ARCH!=XTENSA_LX106_ARCH /* ESP8266 */
int SelectSleepMode(void){
  while(true){
    Serial.println("==== Sleep mode Selection ====");
    Serial.println("Please input sleep mode character.");
#if MODE_IDLE     != _UNSUPPORTED_MODE_
    Serial.println("Idle mode       : \"i\" ");
#endif
#if MODE_ADC      != _UNSUPPORTED_MODE_
    Serial.println("Adc  mode       : \"a\" ");
#endif
#if MODE_PWR_SAVE != _UNSUPPORTED_MODE_
    Serial.println("power Save mode : \"s\" ");
#endif
#if MODE_STANDBY  != _UNSUPPORTED_MODE_
    Serial.println("standBy mode    : \"b\" ");
#endif
#if MODE_PWR_DOWN != _UNSUPPORTED_MODE_
    Serial.println("power Down mode : \"d\" ");
#endif
    Serial.print  ("mode character => ");
    char val;
    while(true){
      if (Serial.available() > 0) {
        val=Serial.read();
        if ((val == '\n')||(val== '\r')) continue;
        break;
      }
    }
    Serial.println(val);
    
    int mode;
    switch(val){
#if MODE_IDLE     != _UNSUPPORTED_MODE_
      case 'i':mode=MODE_IDLE;break;
#endif
#if MODE_ADC      != _UNSUPPORTED_MODE_
      case 'a':mode=MODE_ADC;break;
#endif
#if MODE_PWR_SAVE != _UNSUPPORTED_MODE_
      case 's':mode=MODE_PWR_SAVE;break;
#endif
#if MODE_STANDBY  != _UNSUPPORTED_MODE_
      case 'b':mode=MODE_STANDBY;break;
#endif
#if MODE_PWR_DOWN != _UNSUPPORTED_MODE_
      case 'd':mode=MODE_PWR_DOWN;break;
#endif
      default:mode=_UNSUPPORTED_MODE_;
    }
    if (mode!=_UNSUPPORTED_MODE_) return mode;
    Serial.println("Error: unknown mode character.");
    Serial.println("");
  }
}

/*
 * スリープから起きる際に，PINの操作を使う機種の場合の割り込み設定(ESP8266以外)
 */
void setupInterrupt() {
  pinMode( PIN_NUMBER, INPUT_PULLUP);    // 後の項で使用
#if CPU_ARCH!=XTENSA_LX6_ARCH /* ESP32 */
  ClearInterruptFlag();
#endif /* CPU_ARCH!=XTENSA_LX6_ARCH */

#if CPU_ARCH==XTENSA_LX6_ARCH /* ESP32 */
#ifdef PIN_MASK
  if (!helper.SetInterrupt(PIN_MASK, ESP_EXT1_WAKEUP_ALL_LOW)) Serial.println("set interrupt fail.");
#else /* PIN_MASK */
  if (!helper.SetInterrupt(PIN_NUMBER, LOW)) Serial.println("set interrupt fail.");
#endif /* PIN_MASK */
#else /* CPU_ARCH==XTENSA_LX106_ARCH */
  if (!helper.SetInterrupt(PIN_NUMBER, ExIntCallBack, FALLING)) Serial.println("set interrupt fail.");
#endif /* CPU_ARCH==XTENSA_LX106_ARCH */
  Serial.print("Pin Number = ");Serial.println(PIN_NUMBER);
}

/*
 * スリープから目覚めた場合に，理由を出力する関数(タイマは除く)
 *   ESP8266はタイマ以外はリセットしかないため，これは使わない．
 */
void outputIntInfo(void){
#if CPU_ARCH!=XTENSA_LX6_ARCH /* ESP32 */
  Serial.print("wakeup reason : 0b");Serial.println(WakeUpReason(),BIN);
  ClearInterruptFlag();
  Serial.println("clear interrupt flag ... done.");
#else /* CPU_ARCH!=XTENSA_LX6_ARCH */
  wakeup_reason = esp_sleep_get_wakeup_cause();
  switch(wakeup_reason){
    case ESP_SLEEP_WAKEUP_EXT0      : Serial.printf("外部割り込み(RTC_IO)で起動\n"); break;
    case ESP_SLEEP_WAKEUP_EXT1      : Serial.printf("外部割り込み(RTC_CNTL)で起動 IO=%llX\n", esp_sleep_get_ext1_wakeup_status()); break;
    case ESP_SLEEP_WAKEUP_TIMER     : Serial.printf("タイマー割り込みで起動\n"); break;
    case ESP_SLEEP_WAKEUP_TOUCHPAD  : Serial.printf("タッチ割り込みで起動 PAD=%d\n", esp_sleep_get_touchpad_wakeup_status()); break;
    case ESP_SLEEP_WAKEUP_ULP       : Serial.printf("ULPプログラムで起動\n"); break;
    case ESP_SLEEP_WAKEUP_GPIO      : Serial.printf("ライトスリープからGPIO割り込みで起動\n"); break;
    case ESP_SLEEP_WAKEUP_UART      : Serial.printf("ライトスリープからUART割り込みで起動\n"); break;
    case ESP_SLEEP_WAKEUP_WIFI      : Serial.printf("ライトスリープからWiFiパケット受信で起動\n"); break;
    case ESP_SLEEP_WAKEUP_BT        : Serial.printf("ライトスリープからBlueToothパケット受信で起動\n"); break;
    default                         : Serial.printf("スリープ以外からの起動\n"); break;
  }
#endif /* CPU_ARCH!=XTENSA_LX6_ARCH */
}
#endif /* CPU_ARCH!=XTENSA_LX106_ARCH */

/*
 * Serialに書き出した内容を完全にフラッシュする
 */
void SerialFlush(void) {
  Serial.flush();
#if CPU_ARCH==SAMD_ARCH
  Serial.end();
#endif /* CPU_ARCH==SAMD_ARCH */
}

/*
 * 初期化
 */
void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // シリアルポートの準備ができるのを待つ
  }
#if CPU_ARCH!=XTENSA_LX106_ARCH /* ESP8266以外 */
  setupInterrupt();
#else /* CPU_ARCH!=XTENSA_LX106_ARCH */
  Serial.println("wait 5 sec.");
  delay(5000);
#endif /* CPU_ARCH!=XTENSA_LX106_ARCH */
  Serial.println("setup done.");
}

/*
 * メインループ
 */
void loop() {
  Serial.println("start of loop()");
#if CPU_ARCH!=XTENSA_LX106_ARCH /* ESP8266 */
  int mode = SelectSleepMode();
#else /* CPU_ARCH!=XTENSA_LX106_ARCH */
  uint8_t mode=WIRELESS_STATUS;
#endif /* CPU_ARCH!=XTENSA_LX106_ARCH */

  SerialFlush();

#ifdef MAX_DURATION
  if (helper.SetSleepMode(mode, MAX_DURATION) != 0 ) {
#else /* MAX_DURATION */
  if (helper.SetSleepMode(mode) != 0 ) {
#endif /* MAX_DURATION */
    Serial.println("Set sleep mode failure.");
    SerialFlush();
    return;
  }
  if (!helper.Sleep()) Serial.println("fail to sleep.");
  delay(1000);

#if CPU_ARCH!=XTENSA_LX106_ARCH /* ESP8266 */
  outputIntInfo();
#endif /* CPU_ARCH!=XTENSA_LX106_ARCH */

  Serial.println("end of loop()");
  Serial.flush();
}
