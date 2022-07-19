#include "stm32h743xx.h"

#include "system.h"
#include "msp.h"

#include "hal/debug.h"
#include "hal/adc.h"
#include "hal/dwt.h"

int main()
{
    uint16_t revision = DebugSiliconRevision(); // Revision V
    uint16_t deviceID = DebugDeviceID(); // 0x450

    SysInit();
    MspInit();

    DWTStart();
    uint32_t cnt = 0;

    while(1) {
        DWTReset();
        ADCSetStart(ADC1);
        while(ADCFinished(ADC1)) ;
        cnt = DWTCounter();
        cnt = 0;

    }
}
