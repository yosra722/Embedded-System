/*****************************************/
/******** Author: Yosra Madkour **********/
/******** Date  : 4/8/2026   *************/
/******** File  : Program File ***********/
/*****************************************/
#include"Std_Types.h"
#include"Bit_Math.h"

#include<avr/io.h>

#include"DIO_int.h"
#include"EXTI_config.h"
#include"EXTI_int.h"
#include"EXTI_private.h"

pf x0;
pf x1;
pf x2;

void EXTI0_voidinit()
{
    EXTI0_voidSetSignalCritera(EXTI0_SensMode);
    EXTI0_voidDisable();
    EXTI0_CLEAR_FLAG();

}
void EXTI0_voidEnable()
{
    Set_Bit(GICR,INT0);
}
void EXTI0_voidDisable()
{
    Clr_Bit(GICR,INT0);
}
void EXTI0_voidSetSignalCritera(u8 u8SensMode)
{
    MCUCR &=~0b11;
    MCUCR |=u8SensMode;
}


void EXTI1_voidinit()
{
    EXTI0_1_voidSetSignalCritera(EXTI1_SensMode);
    EXTI1_voidDisable();
    EXTI1_CLEAR_FLAG();
}
void EXTI1_voidEnable()
{
    Set_Bit(GICR,INT1);
}
void EXTI1_voidDisable()
{
    Clr_Bit(GICR,INT1);
}

void EXTI1_voidSetSignalCritera(u8 u8SensMode)
{
    MCUCR &=~(0b11<<2);
    MCUCR |=(u8SensMode<<2);
}


void EXTI2_voidinit()
{
    EXTI2_voidSetSignalCritera(EXTI2_SensMode);
    EXTI2_voidDisable();
    EXTI2_CLEAR_FLAG();
}
void EXTI2_voidEnable()
{
    Set_Bit(GICR,INT2);
}
void EXTI2_voidDisable()
{
    Clr_Bit(GICR,INT2);
}
void EXTI2_voidSetSignalCritera(u8 u8SensMode)
{
    if(u8SensMode==0&&u8SensMode==1){
        switch(u8SensMode)
        {
        case FALLING_2:
            Clr_Bit(MCUCSR,ISC2);
            break;
        case RISING_2:
            Set_Bit(MCUCSR,ISC2);
            break;
        default:break;

        }
    }

}


void EXTI0_voidSetCallBack(pf FunctionAddress)
{
    x0 = FunctionAddress;
}

void EXTI1_voidSetCallBack(PF FunctionAddress)
{
    x1 = FunctionAddress;
}

void EXTI2_voidSetCallBack(PF FunctionAddress)
{
    x2 = FunctionAddress;
}

void __vector_1 (void)__attribute__((signal,used));
void __vector_1(void)
{
    x0();
}


void __vector_2(void) __attribute__((signal,used));

void __vector_2(void)
{
    x1();

}

void __vector_3(void) __attribute__((signal,used));

void __vector_3(void)
{
    x2();
}
