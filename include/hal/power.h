#include "hal/reg.h"

#ifndef NAVOS_POWER_H
#define NAVOS_POWER_H

#define POWER_VOLTAGE_SCALE_1 0b11
#define POWER_VOLTAGE_SCALE_2 0b10
#define POWER_VOLTAGE_SCALE_3 0b01
#define PowerSetVoltageScaling(x) SetReg(PWR->D3CR, PWR_D3CR_VOS_Pos, PWR_D3CR_VOS_Msk, x)

#endif //NAVOS_POWER_H
