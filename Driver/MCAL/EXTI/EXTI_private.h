/*****************************************/
/******** Author: Yosra Madkour **********/
/******** Date  : 4/8/2026   *************/
/******** File  : Private File ***********/
/*****************************************/
#ifndef EXTI_PRIVATE_H
#define EXTI_PRIVATE_H

typedef void (*pf) (void);

#define INT0                7
#define INT1                6
#define INT2                5

#define INTF0                7
#define INTF1                6
#define INTF2                5

#define ENABLE              1
#define DISABLE             0

#define LOW_LEVEL           0b00
#define ANY_CHANGE          0b01
#define FALLING_EDGE        0b10
#define RISING_EDGE         0b11

#define ISC2                6
#define FALLING_2           0
#define RISING_2            1


#endif
