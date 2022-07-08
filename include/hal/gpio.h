#include "hal/reg.h"

#ifndef NAVOS_GPIO_H
#define NAVOS_GPIO_H

#define GPIO_PIN_0  0
#define GPIO_PIN_1  1
#define GPIO_PIN_2  2
#define GPIO_PIN_3  3
#define GPIO_PIN_4  4
#define GPIO_PIN_5  5
#define GPIO_PIN_6  6
#define GPIO_PIN_7  7
#define GPIO_PIN_8  8
#define GPIO_PIN_9  9
#define GPIO_PIN_10 10
#define GPIO_PIN_11 11
#define GPIO_PIN_12 12
#define GPIO_PIN_13 13
#define GPIO_PIN_14 14
#define GPIO_PIN_15 15

#define GPIO_MODE_INPUT     0
#define GPIO_MODE_OUTPUT    1
#define GPIO_MODE_ALTERNATE 2
#define GPIO_MODE_ANALOG    3
#define GPIO_MODE_Msk       3
#define GPIOSetMode(reg, pin, mode) SetReg(reg->MODER, (pin*2), (GPIO_MODE_Msk << (pin*2)), mode)

#define GPIO_OTYPE_PP       0
#define GPIO_OTYPE_OD       1
#define GPIOSetOutputMode(reg, pin, mode) SetReg(reg->OTYPER, (pin), (1 << (pin)), mode)

#define GPIO_MODE_SPEED_LOW     0
#define GPIO_MODE_SPEED_MID     1
#define GPIO_MODE_SPEED_FAST    2
#define GPIO_MODE_SPEED_HIGH    3
#define GPIO_MODE_SPEED_Msk     3
#define GPIOSetOutputSpeed(reg, pin, speed) SetReg(reg->OSPEEDR, (pin*2), (GPIO_MODE_SPEED_Msk << (pin*2)), speed)

#define GPIO_PULL_NO    0
#define GPIO_PULL_UP    1
#define GPIO_PULL_DOWN  2
#define GPIO_PULL_Msk   3
#define GPIOSetPullUpDown(reg, pin, updown) SetReg(reg->PUPDR, (pin*2), (GPIO_PULL_Msk << (pin*2)), updown)

#define GPIO_ALTERNATE_Msk 0xF
#define GPIOSetAlternateFunctionLow(reg, pos, func) SetReg(reg->AFR[0], (pos*4), (GPIO_ALTERNATE_Msk << (pos*4)), func)
#define GPIOSetAlternateFunctionHigh(reg, pos, func) SetReg(reg->AFR[1], (pos*4), (GPIO_ALTERNATE_Msk << (pos*4)), func)
#define GPIOSetAlternateFunction(reg, pin, func) pin < 8 ? GPIOSetAlternateFunctionLow(reg, pin, func): \
                                                           GPIOSetAlternateFunctionHigh(reg, pin-8, func)

#define GPIOSetHigh(reg, pos) SetReg(reg->BSRR, pos, 1 << pos, 1)
#define GPIOSetLow(reg, pos) SetReg(reg->BSRR, pos+16, 1 << (pos+16), 1)
#define GPIOSet(reg, pos, level) level ? GPIOSetHigh(reg, pos) : GPIOSetLow(reg, pos)
//    __asm__ volatile (
//    //             0x40000000UL
//    //             0x00020000UL
//    //             0x    0800UL
//        "ldr r0, =(0x40020814) \n\t" //GPIOC ODR
//        "ldr r1, =(1<<14) \n\t"
//        "ldr r2, =0 \n\t"
//        ".loop: \n\t"
//        "str r1, [r0] \n\t" // ON and OFF commands are unrolled (repeated) about 100 times
//        "str r2, [r0] \n\t" // inside the loop
//        "b .loop \n\t"
//    );

#endif //NAVOS_GPIO_H
