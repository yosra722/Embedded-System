#include "Std_Types.h"
#include "Bit_Math.h"
#include <avr/delay.h>



#include"DIO_int.h"
#include"LCD_Config.h"
#include"LCD_int.h"
#include"LCD_Private.h"

void LCD_voidInit(void)
{
    _delay_ms(35);
	LCD_voidSendCommand(FunctionSet_8b_2l_57);
    _delay_ms(1);
	LCD_voidSendCommand(Display_ON_Cursor_ON_Blink_ON);
    _delay_ms(1);
	LCD_voidSendCommand(Display_Clear);
    _delay_ms(2);
	LCD_voidSendCommand(Enter_Mode_INC);
	_delay_ms(1);
}

void LCD_voidSendCommand(u8 u8CMD)
{
    DIO_voidSetPinValue(LCD_RS,LOW);
	DIO_voidSetPinValue(LCD_RW,LOW);

    LCD_voidPutonBus(u8CMD);

    DIO_voidSetPinValue(LCD_EN,HIGH);
    _delay_ms(2);

	DIO_voidSetPinValue(LCD_EN,LOW);
    _delay_ms(2);
}

void LCD_voidSendData(u8 u8Data)
{
	DIO_voidSetPinValue(LCD_RS,HIGH);
	DIO_voidSetPinValue(LCD_RW,LOW);


    LCD_voidPutonBus(u8Data);
    DIO_voidSetPinValue(LCD_EN,HIGH);
    _delay_ms(2);

	DIO_voidSetPinValue(LCD_EN,LOW);
    _delay_ms(2);
}

static void LCD_voidPutonBus(u8 u8Char)
{
    DIO_voidSetPinValue(LCD_D0,Get_Bit(u8Char,0));
    DIO_voidSetPinValue(LCD_D1,Get_Bit(u8Char,1));
    DIO_voidSetPinValue(LCD_D2,Get_Bit(u8Char,2));
    DIO_voidSetPinValue(LCD_D3,Get_Bit(u8Char,3));
    DIO_voidSetPinValue(LCD_D4,Get_Bit(u8Char,4));
    DIO_voidSetPinValue(LCD_D5,Get_Bit(u8Char,5));
    DIO_voidSetPinValue(LCD_D6,Get_Bit(u8Char,6));
    DIO_voidSetPinValue(LCD_D7,Get_Bit(u8Char,7));

}


void LCD_GotoXY(u8 x, u8 y)
{
	if(y==0){
		while(x){
			LCD_voidSendCommand(Cursor_R);
			x--;
		}
	}
	else if(y==1){
		LCD_voidSendCommand(Set_Address_FirstSecondRow);
		while(x){
			LCD_voidSendCommand(Cursor_R);
			x--;
		}
	}
	else {
		//no code
	}

}

void LCD_voidWriteString(u8 * u8string)
{
	u8 s=0;
	while(u8string[s]!='\0'){
		LCD_voidSendData(u8string[s]);
		s++;
	}

}

void LCD_voidWriteNumber(u8 u8Number)
{
	LCD_voidSendData(u8Number+48);
}
