#ifndef NAVOS_REG_H
#define NAVOS_REG_H

#define True    1
#define False   0
#define Enable  1
#define Disable 0

#define CleanBits(reg,msk)              ((reg) &= ~(msk))

#define GetBits(reg, pos, msk)          (((reg) & (msk)) >> (pos))
#define IsSet(reg, msk)                 (((reg) & (msk)) != 0)
#define SetBits(reg, msk, x)            (reg = ((reg) & (~(msk))) | (x))
#define SetReg(reg, pos, msk, x)        (reg = ((reg) & (~(msk))) | (((x) << (pos)) & (msk)))

#endif //NAVOS_REG_H
