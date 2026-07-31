#ifndef LCD_PRIVATE_H
#define LCD_PRIVATE_H

#define FunctionSet_8b_1l_57  				0x30
#define FunctionSet_8b_1l_510 				0x34
#define FunctionSet_8b_2l_57  				0x38
#define FunctionSet_8b_2l_510 				0x3C

#define FunctionSet_4b_1l_57  				0x20
#define FunctionSet_4b_1l_510 				0x24
#define FunctionSet_4b_2l_57  				0x28
#define FunctionSet_4b_2l_510 				0x2C



#define Display_OFF  						0x08
#define Display_ON_Cursor_OFF  				0x0C
#define Display_ON_Cursor_ON_Blink_OFF  	0x0E
#define Display_ON_Cursor_ON_Blink_ON   	0x0F

#define Display_Clear 						0x01

#define Enter_Mode_INC  					0x06
#define Enter_Mode_DEC  					0x04

#define Enter_Mode_INC_Shift 				0x07
#define Enter_Mode_DEC_Shift  				0x05

#define Return_Home 						0x02

#define Cursor_R  							0x14
#define Cursor_L  							0x10
#define Screen_R  							0x1C
#define Screen_L  							0x18

#define Set_Address_FirstSecondRow			0xC0
static void LCD_voidPutonBus(u8 u8Char);

#endif
