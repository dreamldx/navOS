#include "stm32h743xx.h"

#include "system.h"
#include "hal/dwt.h"
#include "hal/gpio.h"
#include "hal/timer.h"
#include "hal/rcc.h"

#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

int main()
{
    InitializeSystem();

    uint32_t cnt = 0;
    DWTStart();

    RCCEnableGPIOE();
    RCCEnableTimer15();

    GPIOSetMode(GPIOE, GPIO_PIN_3, GPIO_MODE_OUTPUT);
    GPIOSetOutputMode(GPIOE, GPIO_PIN_3, GPIO_OTYPE_PP);
    GPIOSetPullUpDown(GPIOE, GPIO_PIN_3, GPIO_PULL_DOWN);
    GPIOSetOutputSpeed(GPIOE, GPIO_PIN_3, GPIO_MODE_SPEED_FAST);
    GPIOSetHigh(GPIOE, GPIO_PIN_3);

    GPIOSetMode(GPIOE, GPIO_PIN_4, GPIO_MODE_ALTERNATE);
    GPIOSetOutputMode(GPIOE, GPIO_PIN_4, GPIO_OTYPE_PP);
    GPIOSetPullUpDown(GPIOE, GPIO_PIN_4, GPIO_PULL_NO);
    GPIOSetOutputSpeed(GPIOE, GPIO_PIN_4, GPIO_MODE_SPEED_FAST);
    GPIOSetAlternateFunction(GPIOE, GPIO_PIN_4, 4);

    GPIOSetMode(GPIOE, GPIO_PIN_5, GPIO_MODE_ALTERNATE);
    GPIOSetOutputMode(GPIOE, GPIO_PIN_5, GPIO_OTYPE_PP);
    GPIOSetPullUpDown(GPIOE, GPIO_PIN_5, GPIO_PULL_NO);
    GPIOSetOutputSpeed(GPIOE, GPIO_PIN_5, GPIO_MODE_SPEED_FAST);
    GPIOSetAlternateFunction(GPIOE, GPIO_PIN_5, 4);

    TimerSetPerScaler(TIM15, 10000);
    TimerSetAutoReload(TIM15, 40000);
    TimerSetAutoReloadEnable(TIM15, Enable);

    TimerSetMainOutputEnable(TIM15, Enable);
    TimerSetOutputChannel1Mode(TIM15, TIMER_OUTPUT_MODE_PWM_1);
    TimerSetOutputChannel1Preload(TIM15, Enable);
    TimerSetOutputChannel1Value(TIM15, 1000);
    TimerSetOutputChannel1ComplementaryEnable(TIM15, Enable); // MOE, OSSI, OSSR, OIS1, OIS1N and CC1E bits.
    TimerSetOutputChannel1Enable(TIM15, Enable);

    TimerSetCounterEnable(TIM15, TIMER_ENABLE);

    while(1) {}
}
