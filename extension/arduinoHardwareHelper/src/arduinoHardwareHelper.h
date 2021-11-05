#ifndef __HARDWARE_HELPER_H__
#define __HARDWARE_HELPER_H__

#include "detectArduinoHardware.h"

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

class HardwareHelper {
  public:
    HardwareHelper(void);
    bool checkPMW(int port);
    void SoftwareReset(void);
    void SerialWait(void);
  //private:
    //int pmwPorts[] = PMW_PORTS;
    //size_t numOfPorts;
};


#endif /* __HARDWARE_HELPER_H__ */
