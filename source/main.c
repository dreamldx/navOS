#include "stm32h743xx.h"

#include "system.h"
#include "hal/dwt.h"

#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

int main()
{
    InitializeSystem();
    uint32_t cnt = 0;
    DWTStart();
    while(1) {
        DWTReset();
        for (float i=0.0f;i<200.0f;i++);
        cnt = DWRCounter();
        cnt = 0;

        // double   10508
        // float     8456
        // uint32_t  1626
        // uint16_t  2634
        // uint8_t   2634
    }
}
