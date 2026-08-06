#include"Std_Types.h"
#include"Bit_Math.h"

#include <avr/io.h>
#include <avr/delay.h>


#include"DIO_int.h"
#include"KeyP_int.h"
#include"KeyP_private.h"
#include"KeyP_config.h"

const u8 Keys[4][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'},{'*','0','#'}};

static u8 Rows[4]={R_0,R_1,R_2,R_3};
static u8 Cols[3]={C_0,C_1,C_2};



void KeyP_voidInit(void)
{
    DIO_voidSetPinValue(ROWS,R_0,HIGH);
    DIO_voidSetPinValue(ROWS,R_1,HIGH);
    DIO_voidSetPinValue(ROWS,R_2,HIGH);
    DIO_voidSetPinValue(ROWS,R_3,HIGH);

    DIO_voidSetPinValue(COLS,C_0,HIGH);
    DIO_voidSetPinValue(COLS,C_1,HIGH);
    DIO_voidSetPinValue(COLS,C_2,HIGH);

}


u8 KeyP_u8GetPressedKey()
{

		u8 x;
	    for(u8 i=0;i<3;i++){
	        DIO_voidSetPinValue(COLS,Cols[i],LOW);
	        for(u8 j=0;j<4;j++){

	        	x=DIO_u8GetPinValue(ROWS,Rows[j]);
	            if(!x)
	            {
	            	_delay_ms(50);
	            	x=DIO_u8GetPinValue(ROWS,Rows[j]);
	                if(!x)
	            {
	                	x=DIO_u8GetPinValue(ROWS,Rows[j]);
	                	while(!x)
	                	{
	                		x=DIO_u8GetPinValue(ROWS,Rows[j]);
	                	}
	                	DIO_voidSetPinValue(COLS, Cols[i], HIGH);
	                	return Keys[j][i];

	             }

	            }
	        }
	        DIO_voidSetPinValue(COLS,Cols[i],HIGH);
	    }
	    return NOT_PRESSED;



}


