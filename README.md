# detectArduinoHardware
Arduinoの機種を区別し，特徴をdefineする．


## 使い方
```

#include "detectArduinoHardware.h"


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  waitForSerial();  <== 一部の機種で，シリアルをオープンした時にリセットされない作りに対応．

  /*  以下の部分にコンパイルした対象の機種の特徴をコンソールに出力 */
  Serial.print("Name           : ");Serial.println(HARDWARE_NAME);
  Serial.print("CPU ARCH       : ");Serial.println(CPU_ARCH);
  Serial.print("CHIPSET        : ");Serial.println(CHIPSET);
  Serial.print("CHIP           : ");Serial.println(CHIP);
  Serial.print("HARDWARE       : ");Serial.println(CHIP);
  Serial.print("Voltage        : ");Serial.println(HARDWARE_VOLTAGE);  // 動作電圧の10倍の数値で出る．
  Serial.print("num of Serial  : ");Serial.println(MAX_SERIAL);
  Serial.print("num of digital : ");Serial.println(MAX_DIGITAL);
  Serial.print("num of analog  : ");Serial.println(MAX_ANALOG);
  Serial.print("I2C SDA        : ");Serial.println(I2C_SDA);
  Serial.print("I2C SCL        : ");Serial.println(I2C_SCL);
  Serial.print("SPI MOSI       : ");Serial.println(SPI_MOSI);
  Serial.print("SPI MISO       : ");Serial.println(SPI_MISO);
  Serial.print("SPI SCK        : ");Serial.println(SPI_SCK);
  Serial.print("SPI SS         : ");Serial.println(SPI_SS);
  Serial.print("onboard LED    : ");Serial.println(ONBOARD_LED);
}

void loop() {
  // put your main code here, to run repeatedly:

}
```
