/*****************************************/
/******** Author: Yosra Madkour **********/
/******** Date  : 4/8/2026   *************/
/******** File  : Interface File *********/
/*****************************************/
#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H



void EXTI0_voidinit();
void EXTI0_voidEnable();
void EXTI0_voidDisable();
void EXTI0_voidSetSignalCritera(u8 u8SensMode);
void EXTI0_voidSetCallBack(pf FunctionAddress);

void EXTI1_voidinit();
void EXTI1_voidEnable();
void EXTI1_voidDisable();
void EXTI1_voidSetSignalCritera(u8 u8SensMode);
void EXTI1_voidSetCallBack(pf FunctionAddress);

void EXTI2_voidinit();
void EXTI2_voidEnable();
void EXTI2_voidDisable();
void EXTI2_voidSetSignalCritera(u8 u8SensMode);
void EXTI2_voidSetCallBack(pf FunctionAddress);

#endif
