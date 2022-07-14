#include "hal/reg.h"

#ifndef STM32H7_RCC_H
#define STM32H7_RCC_H

// PLL ------------------------------------------
#define RCC_PLL_INPUT_RANGE_1_2_MHZ 0b00
#define RCC_PLL_INPUT_RANGE_2_4_MHZ 0b01
#define RCC_PLL_INPUT_RANGE_4_8_MHZ 0b10
#define RCC_PLL_INPUT_RANGE_8_16_MHZ 0b11

#define RCC_PLL_OUTPUT_RANGE_WIDE      0
#define RCC_PLL_OUTPUT_RANGE_MEDIUM    1

#define RCCSetPLL1Enable(x)         SetReg(RCC->CR, RCC_CR_PLL1ON_Pos, RCC_CR_PLL1ON_Msk, x)
#define RCCSetPLL1DividerM(x)       SetReg(RCC->PLLCKSELR, RCC_PLLCKSELR_DIVM1_Pos, RCC_PLLCKSELR_DIVM1_Msk, x)
#define RCCSetPLL1DividerN(x)       SetReg(RCC->PLL1DIVR, RCC_PLL1DIVR_N1_Pos, RCC_PLL1DIVR_N1_Msk, (x)-1)
#define RCCSetPLL1DividerPEnable(x) SetReg(RCC->PLLCFGR, RCC_PLLCFGR_DIVP1EN_Pos, RCC_PLLCFGR_DIVP1EN_Msk, x)
#define RCCSetPLL1DividerP(x)       SetReg(RCC->PLL1DIVR, RCC_PLL1DIVR_P1_Pos, RCC_PLL1DIVR_P1_Msk, (x)-1)
#define RCCSetPLL1DividerQEnable(x) SetReg(RCC->PLLCFGR, RCC_PLLCFGR_DIVQ1EN_Pos, RCC_PLLCFGR_DIVQ1EN_Msk, x)
#define RCCSetPLL1DividerQ(x)       SetReg(RCC->PLL1DIVR, RCC_PLL1DIVR_Q1_Pos, RCC_PLL1DIVR_Q1_Msk, x)
#define RCCSetPLL1DividerREnable(x) SetReg(RCC->PLLCFGR, RCC_PLLCFGR_DIVR1EN_Pos, RCC_PLLCFGR_DIVR1EN_Msk, x)
#define RCCSetPLL1DividerR(x)       SetReg(RCC->PLL1DIVR, RCC_PLL1DIVR_R1_Pos, RCC_PLL1DIVR_R1_Msk, x)
#define RCCSetPLL1InputRange(x)     SetReg(RCC->PLLCFGR, RCC_PLLCFGR_PLL1RGE_Pos, RCC_PLLCFGR_PLL1RGE_Msk, x)
#define RCCSetPLL1OutputRange(x)    SetReg(RCC->PLLCFGR, RCC_PLLCFGR_PLL1VCOSEL_Pos, RCC_PLLCFGR_PLL1VCOSEL_Msk, x)
#define RCCSetPLL1Enable(x)      SetReg(RCC->CR, RCC_CR_PLL1ON_Pos, RCC_CR_PLL1ON_Msk, x)
#define RCCPLL1Ready()        GetBits(RCC->CR, RCC_CR_PLL1RDY_Pos, RCC_CR_PLL1RDY_Msk)

#define RCCSetPLL2Enable(x)      SetReg(RCC->CR, RCC_CR_PLL2ON_Pos, RCC_CR_PLL2ON_Msk, x)
#define RCCSetPLL2DivisorM(x)    SetReg(RCC->PLLCKSELR, RCC_PLLCKSELR_DIVM2_Pos, RCC_PLLCKSELR_DIVM2_Msk, x)

#define RCCSetPLL3Enable(x)      SetReg(RCC->CR, RCC_CR_PLL3ON_Pos, RCC_CR_PLL3ON_Msk, x)
#define RCCSetPLL3DivisorM(x)    SetReg(RCC->PLLCKSELR, RCC_PLLCKSELR_DIVM3_Pos, RCC_PLLCKSELR_DIVM3_Msk, x)

#define RCCSetPLLSource(x)       SetReg(RCC->PLLCKSELR, RCC_PLLCKSELR_PLLSRC_Pos, RCC_PLLCKSELR_PLLSRC_Msk, x)


// HSE ------------------------------------------
#define RCCSetHSEEnable(x)       SetReg(RCC->CR, RCC_CR_HSEON_Pos, RCC_CR_HSEON_Msk, x)
#define RCCHSEReady()         GetBits(RCC->CR, RCC_CR_HSERDY_Pos, RCC_CR_HSERDY_Msk)



// Domain ------------------------------------------
#define RCC_DOMAIN1_CLOCK_PRESCALER_DIV_1 0b0000
#define RCC_DOMAIN1_CLOCK_PRESCALER_DIV_2 0b1000
#define RCC_DOMAIN1_CLOCK_PRESCALER_DIV_4 0b1001
#define RCC_DOMAIN1_CLOCK_PRESCALER_DIV_8 0b1010
#define RCCSetDomain1ClockPrescaler(x) SetReg(RCC->D1CFGR, RCC_D1CFGR_D1CPRE_Pos, RCC_D1CFGR_D1CPRE_Msk, x)



// AXI ----------------------------------------------
#define RCC_AHB_PRESCALER_DIV_0 0b0000
#define RCC_AHB_PRESCALER_DIV_2 0b1000
#define RCC_AHB_PRESCALER_DIV_4 0b1001
#define RCC_AHB_PRESCALER_DIV_8 0b1010
#define RCCSetAHBPrescaler(x) SetReg(RCC->D1CFGR, RCC_D1CFGR_HPRE_Pos, RCC_D1CFGR_HPRE_Msk, x)


#define RCC_APB_PRESCALER_DIV_0 0b000
#define RCC_APB_PRESCALER_DIV_2 0b100
#define RCC_APB_PRESCALER_DIV_4 0b101
#define RCC_APB_PRESCALER_DIV_8 0b110

#define RCCSetAPB1Prescaler(x) SetReg(RCC->D2CFGR, RCC_D2CFGR_D2PPRE1_Pos, RCC_D2CFGR_D2PPRE1_Msk, x)
#define RCCSetAPB2Prescaler(x) SetReg(RCC->D2CFGR, RCC_D2CFGR_D2PPRE2_Pos, RCC_D2CFGR_D2PPRE2_Msk, x)
#define RCCSetAPB3Prescaler(x) SetReg(RCC->D1CFGR, RCC_D1CFGR_D1PPRE_Pos, RCC_D1CFGR_D1PPRE_Msk, x)
#define RCCSetAPB4Prescaler(x) SetReg(RCC->D3CFGR, RCC_D3CFGR_D3PPRE_Pos, RCC_D3CFGR_D3PPRE_Msk, x)


// Sys -----------------------------------------------
#define RCCSetSystemClockSource(x) SetReg(RCC->CFGR, RCC_CFGR_SW_Pos, RCC_CFGR_SW_Msk, x)


// Peripheral ----------------------------------------
#define RCCEnableAHB4()     (RCC->AHB4ENR)
#define RCCEnableGPIOE()    (RCC->AHB4ENR |= (1 << RCC_AHB4ENR_GPIOEEN_Pos))
#define RCCEnableTimer15()  (RCC->APB2ENR |= (1 << RCC_APB2ENR_TIM15EN_Pos))

#endif //STM32H7_RCC_H
