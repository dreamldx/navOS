#include "stm32h743xx.h"

#include "system.h"
#include "msp.h"

#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

int main()
{
    SysInit();
    MspInit();

    while(1) {}
}
