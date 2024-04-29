#include "arduinoHardwareHelper.h"

HardwareHelper::HardwareHelper(void){
  //int pmwPorts[] = PMW_PORTS;
  //numOfPorts= (sizeof(pmwPorts) / sizeof(pmwPorts[0]))
}

bool HardwareHelper::checkPMW(int port) {
  int pmwPorts[] = PMW_PORTS;
  size_t numOfPorts= (sizeof(pmwPorts) / sizeof(pmwPorts[0]));
  for (int i=0; i< numOfPorts;i++){
    if (port == pmwPorts[i]) return true;
  }
  return false;
}

void HardwareHelper::SoftwareReset(void) {
#if CPU_ARCH==AVR_ARCH
  asm volatile ("  jmp 0");
#elif CPU_ARCH==XTENSA_LX106_ARCH
  ESP.restart();
#elif CPU_ARCH==XTENSA_LX6_ARCH
  ESP.restart();
#elif CPU_ARCH==SAMD_ARCH
  //#include "Reset.h"
  #define BOOT_DOUBLE_TAP_ADDRESS     (0x20007FFCul)
  #define BOOT_DOUBLE_TAP_DATA        (*((volatile uint32_t *) BOOT_DOUBLE_TAP_ADDRESS))
  #define DOUBLE_TAP_MAGIC            (0x07738135)
  BOOT_DOUBLE_TAP_DATA  = DOUBLE_TAP_MAGIC;
  NVIC_SystemReset() ;
#elif CPU_ARCH==SAM_ARCH
#define SYSRESETREQ    (1<<2)
#define VECTKEY        (0x05fa0000UL)
#define VECTKEY_MASK   (0x0000ffffUL)
#define AIRCR          (*(uint32_t*)0xe000ed0cUL) // fixed arch-defined address
#define REQUEST_EXTERNAL_RESET (AIRCR=(AIRCR&VECTKEY_MASK)|VECTKEY|SYSRESETREQ)
  REQUEST_EXTERNAL_RESET;
#elif CPU_ARCH==RA4_ARCH
  NVIC_SystemReset();
#elif CPU_ARCH==STM32_ARCH
  NVIC_SystemReset();
#elif CPU_ARCH==RP_ARCH
  rp2040.reboot();
#else
#error "unkown cpu type"
#endif
}

void HardwareHelper::SerialWait(void) {
#if SERIAL_RESET==true
  return;
#else
  while (!Serial) {       // シリアルポートが開くのを待つ
    ;
  }
  return;
#endif
}

