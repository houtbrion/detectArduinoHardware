
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
  //delay(5000);
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
