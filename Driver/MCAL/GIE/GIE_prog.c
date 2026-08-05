/*****************************************/
/******** Author: Yosra Madkour **********/
/******** Date  : 4/8/2026   *************/
/******** File  : Program File ***********/
/*****************************************/
#include "Std_Types.h"
#include "Bit_Math.h"

#include<avr/io.h>

#include"DIO_int.h"

#include"GIE_config.h"
#include"GIE_int.h"
#include"GIE_private.h"



void GIE_voidEnable(void)
{
    SET_BIT(SRGE,I);
}



void GIE_voidDisable(void)
{
    CLR_BIT(SRGE,I);
}
