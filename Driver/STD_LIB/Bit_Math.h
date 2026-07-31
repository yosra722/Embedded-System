#ifndef BIT_Math_H
#define BIT_Math_H

#define SET_BIT(REG,BIT_NUM)   REG|= (1<<BIT_NUM)
#define CLR_BIT(REG,BIT_NUM)   REG&= ~(1<<BIT_NUM)
#define TOG_BIT(REG,BIT_NUM)   REG^= (1<<BIT_NUM)

#define Get_Bit(REG,BIT_NUM)   ((REG>>BIT_NUM)&0x01)

#define SET_PORT(REG)   REG = 0xFF
#define CLR_PORT(REG)   REG = 0x00
#define SET_BYTE(REG, VALUE)	REG=VALUE

//#define Conc_Bit
#endif
