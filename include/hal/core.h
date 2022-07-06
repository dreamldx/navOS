#ifndef NAVOS_CORE_H
#define NAVOS_CORE_H

#define CoreEnableCP10CP11()    SCB->CPACR |= ((3UL << (10*2))|(3UL << (11*2)));

#endif //NAVOS_CORE_H
