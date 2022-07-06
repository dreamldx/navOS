#include "hal/reg.h"

#ifndef NAVOS_FLASH_H
#define NAVOS_FLASH_H

#define FlashSetLatency(x) SetReg(FLASH->ACR, FLASH_ACR_LATENCY_Pos, FLASH_ACR_LATENCY_Msk, x);

#endif //NAVOS_FLASH_H
