/*****************************************/
/******** Author: Yosra Madkour **********/
/******** Date  : 4/8/2026   *************/
/******** File  : Configuration File *****/
/*****************************************/
#ifndef EXTI_CONFIGRATION_H
#define EXTI_CONFIGRATIONE_H

#define EXTI0_SensMode      FALLING_EDGE
#define EXTI1_SensMode      FALLING_EDGE
#define EXTI2_SensMode      FALLING_2

#define EXTI0_CLEAR_FLAG()   Set_Bit(GIFR, INTF0);
#define EXTI1_CLEAR_FLAG()   Set_Bit(GIFR, INTF1);
#define EXTI2_CLEAR_FLAG()   Set_Bit(GIFR, INTF2
#endif
