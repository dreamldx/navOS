#ifndef NAVOS_DWT_H
#define NAVOS_DWT_H

#define DWTStart()     DWT->CTRL |= 1
#define DWTStop()      DWT->CTRL &= (~1)
#define DWTReset()     DWT->CYCCNT = 0
#define DWRCounter()    DWT->CYCCNT


#endif //NAVOS_DWT_H
