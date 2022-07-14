#include "stm32h743xx.h"

#include "hal/core.h"
#include "hal/flash.h"
#include "hal/power.h"
#include "hal/rcc.h"

void SysInit() {
    CoreEnableCP10CP11();

    PowerSetVoltageScaling(POWER_VOLTAGE_SCALE_1);
    FlashSetLatency(4);

    RCCSetSystemClockSource(RCC_CFGR_SW_HSI);
    RCCSetPLL1Enable(Disable);
    RCCSetPLL2Enable(Disable);
    RCCSetPLL3Enable(Disable);

    RCCSetPLLSource(RCC_PLLCKSELR_PLLSRC_HSE);
    RCCSetPLL1InputRange(RCC_PLL_INPUT_RANGE_2_4_MHZ);
    RCCSetPLL1OutputRange(RCC_PLL_OUTPUT_RANGE_WIDE);
    RCCSetPLL1DividerM(2);
    RCCSetPLL1DividerN(240);
    RCCSetPLL1DividerPEnable(Enable);
    RCCSetPLL1DividerP(2);

    RCCSetDomain1ClockPrescaler(RCC_DOMAIN1_CLOCK_PRESCALER_DIV_1);
    RCCSetAHBPrescaler(RCC_AHB_PRESCALER_DIV_2);
    RCCSetAPB1Prescaler(RCC_APB_PRESCALER_DIV_2);
    RCCSetAPB2Prescaler(RCC_APB_PRESCALER_DIV_2);
    RCCSetAPB3Prescaler(RCC_APB_PRESCALER_DIV_2);
    RCCSetAPB4Prescaler(RCC_APB_PRESCALER_DIV_2);

    RCCSetHSEEnable(Enable);
    RCCSetPLL1Enable(Enable);

    while( !RCCHSEReady() );
    while( !RCCPLL1Ready() );

    RCCSetSystemClockSource(RCC_CFGR_SW_PLL1);
}