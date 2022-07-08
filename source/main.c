#include "stm32h743xx.h"

#include "system.h"
#include "hal/dwt.h"
#include "hal/gpio.h"
#include "hal/rcc.h"

#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

int main()
{
    InitializeSystem();

    uint32_t cnt = 0;
    DWTStart();

    RCCEnableGPIOE();


    GPIOSetMode(GPIOE, GPIO_PIN_3, GPIO_MODE_OUTPUT);
    GPIOSetOutputMode(GPIOE, GPIO_PIN_3, GPIO_OTYPE_PP);
    GPIOSetPullUpDown(GPIOE, GPIO_PIN_3, GPIO_PULL_DOWN);
    GPIOSetOutputSpeed(GPIOE, GPIO_PIN_3, GPIO_MODE_SPEED_FAST);


    while(1) {
        DWTReset();
        GPIOSetHigh(GPIOE, GPIO_PIN_3);
        for (uint32_t i=0;i<600000;i++);
        GPIOSetLow(GPIOE, GPIO_PIN_3);
        for (uint32_t i=0;i<600000;i++);
        cnt = DWRCounter();
        cnt = 0;

        // double   10508
        // float     8456
        // uint32_t  1626
        // uint16_t  2634
        // uint8_t   2634
    }
}
