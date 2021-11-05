
#include "arduinoHardwareHelper.h"

HardwareHelper hwHelper;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  /* シリアルポートのオープン待ち */
  hwHelper.SerialWait();

  Serial.print("CPU ARCH       : ");Serial.println(CPU_ARCH);
  Serial.print("CPU_TYPE       : ");Serial.println(CPU_TYPE);
  Serial.print("HARDWARE       : ");Serial.println(HARDWARE_TYPE);
  Serial.print("HARDWARE NAME  : ");Serial.println(HARDWARE_NAME);
  Serial.print("Voltage        : ");Serial.println(HARDWARE_VDD);  // 動作電圧の10倍の数値で出る．
  Serial.print("AREF Voltage   : ");Serial.println(HARDWARE_AREF);  // 動作電圧の10倍の数値で出る．
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

  /* ここから，このライブラリの機能 */
  /* あるデジタルピンがPMW出力可能か否かを判定するもの */
  for (int i=0;i<10;i++){
    Serial.print("Digital port No.");Serial.print(i);Serial.print(" can use PMW : ");
    if (hwHelper.checkPMW(i)) {
      Serial.println("true");
    } else {
      Serial.println("false");
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
