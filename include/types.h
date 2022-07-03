//
// Created by dreamldx on 1/4/2022.
//

#ifndef STM32F4_TYPES_H
#define STM32F4_TYPES_H

struct DWORD {
    union {
        uint32_t value;
        uint8_t array[4];
    };
};



#endif //STM32F4_TYPES_H
