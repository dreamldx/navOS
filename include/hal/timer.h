#include "hal/reg.h"

// Enable Timer:
//  TimerSetPerScaler(TIM15, 50000);
//  TimerSetAutoReload(TIM15, 6000);
//  TimerSetAutoReloadEnable(TIM15, Enable);
//  TimerSetCounterEnable(TIM15, TIMER_ENABLE);
// Enable Output Channel:
//  TimerSetMainOutputEnable(TIM15, Enable);
//  TimerSetOutputChannel1Mode(TIM15, TIMER_OUTPUT_MODE_PWM_1);
//  TimerSetOutputChannel1Preload(TIM15, Enable);
//  TimerSetOutputChannel1Value(TIM15, 1000);
//  TimerSetOutputChannel1ComplementaryEnable(TIM15, Enable); // MOE, OSSI, OSSR, OIS1, OIS1N and CC1E bits.
//  TimerSetOutputChannel1Enable(TIM15, Enable);

#ifndef NAVOS_TIMER_H
#define NAVOS_TIMER_H

#define TimerSetPerScaler(tim, x) SetReg(tim->PSC, TIM_PSC_PSC_Pos, TIM_PSC_PSC_Msk, x)
#define TimerSetAutoReload(tim, x) SetReg(tim->ARR, TIM_ARR_ARR_Pos, TIM_ARR_ARR_Msk, x)
#define TimerSetAutoReloadEnable(tim, x) SetReg(tim->CR1, TIM_CR1_ARPE_Pos, TIM_CR1_ARPE_Msk, x)

#define TIMER_ENABLE  1
#define TIMER_DISABLE 0
#define TimerSetCounterEnable(tim, x) SetReg(tim->CR1, TIM_CR1_CEN_Pos, TIM_CR1_CEN_Msk, x)

#define TimerCounter(tim) tim->CNT

#define TIMER_OUTPUT_MODE_FROZEN            0b0000
#define TIMER_OUTPUT_MODE_ACTIVE            0b0001
#define TIMER_OUTPUT_MODE_INACTIVE          0b0010
#define TIMER_OUTPUT_MODE_TOGGLE            0b0011
#define TIMER_OUTPUT_MODE_FORCE_INACTIVE    0b0100
#define TIMER_OUTPUT_MODE_FORCE_ACTIVE      0b0101
#define TIMER_OUTPUT_MODE_PWM_1             0b0110
#define TIMER_OUTPUT_MODE_PWM_2             0b0111
#define TimerSetOutputChannel1Mode(tim, x) SetReg(tim->CCMR1, TIM_CCMR1_OC1M_Pos, TIM_CCMR1_OC1M_Msk, x)
#define TimerSetOutputChannel1Preload(tim, x) SetReg(tim->CCMR1, TIM_CCMR1_OC1PE_Pos, TIM_CCMR1_OC1PE_Msk, x)
#define TimerSetOutputChannel1Enable(tim, x) SetReg(tim->CCER, TIM_CCER_CC1E_Pos, TIM_CCER_CC1E_Msk, x)
#define TimerSetOutputChannel1ComplementaryEnable(tim, x) SetReg(tim->CCER, TIM_CCER_CC1NE_Pos, TIM_CCER_CC1NE_Msk, x)
#define TimerSetOutputChannel1Value(tim, x) SetReg(tim->CCR1, TIM_CCR1_CCR1_Pos, TIM_CCR1_CCR1_Msk, x)

#define TimerSetMainOutputEnable(tim, x) SetReg(tim->BDTR, TIM_BDTR_MOE_Pos, TIM_BDTR_MOE_Msk, x)

#endif //NAVOS_TIMER_H

