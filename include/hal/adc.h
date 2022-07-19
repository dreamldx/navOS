#include "hal/reg.h"

#ifndef NAVOS_ADC_H
#define NAVOS_ADC_H

#define ADCSetDeepPower(reg, x)     SetReg(reg->CR, ADC_CR_DEEPPWD_Pos, ADC_CR_DEEPPWD_Msk, x)
#define ADCSetVoltReg(reg, x)       SetReg(reg->CR, ADC_CR_ADVREGEN_Pos, ADC_CR_ADVREGEN_Msk, x)
#define ADCLDOReady(reg)            GetBits(reg->ISR, ADC_ISR_LDORDY_Pos, ADC_ISR_LDORDY_Msk)

#define ADC_CLOCK_MODE_CK       0b00
#define ADC_CLOCK_MODE_HCLK_1   0b01
#define ADC_CLOCK_MODE_HCLK_2   0b10
#define ADC_CLOCK_MODE_HCLK_4   0b11
#define ADCSetClockMode(reg, x)     SetReg(reg->CCR, ADC_CCR_CKMODE_Pos, ADC_CCR_CKMODE_Msk, x)

#define ADCSetEnable(reg, x)        SetReg(reg->CR, ADC_CR_ADEN_Pos, ADC_CR_ADEN_Msk, x)
#define ADCReady(reg)            GetBits(reg->ISR, ADC_ISR_ADRDY_Pos, ADC_ISR_ADRDY_Msk)

#define ADCSetCalibration(reg, x)   SetReg(reg->CR, ADC_CR_ADCAL_Pos, ADC_CR_ADCAL_Msk, x)
#define ADCCalibrationDone(reg)     GetBits(reg->CR, ADC_CR_ADCAL_Pos, ADC_CR_ADCAL_Msk)

#define ADCSetStart(reg)               SetReg(reg->CR, ADC_CR_ADSTART_Pos, ADC_CR_ADSTART_Msk, Enable)
#define ADCFinished(reg)               GetBits(reg->ISR, ADC_ISR_EOC_Pos, ADC_ISR_EOC_Msk)

#endif //NAVOS_ADC_H
