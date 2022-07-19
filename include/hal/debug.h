#include "hal/reg.h"

#ifndef NAVOS_DEBUG_H
#define NAVOS_DEBUG_H

#define DebugSiliconRevision() GetBits(DBGMCU->IDCODE, DBGMCU_IDCODE_REV_ID_Pos, DBGMCU_IDCODE_REV_ID_Msk)
#define DebugDeviceID() GetBits(DBGMCU->IDCODE, DBGMCU_IDCODE_DEV_ID_Pos, DBGMCU_IDCODE_DEV_ID_Msk)
#endif //NAVOS_DEBUG_H
