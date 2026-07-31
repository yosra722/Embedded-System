#include "Std_Types.h"
#include "Bit_Math.h"


#include "DIO_private.h"
#include "DIO_config.h"
#include "DIO_int.h"

void DIO_voidInit(void)
{
	DDRA = DIO_PORTA_DIRECTIONS;
	DDRB = DIO_PORTB_DIRECTIONS;
	DDRC = DIO_PORTC_DIRECTIONS;
	DDRD = DIO_PORTD_DIRECTIONS;
}
void DIO_voidSetPinDirection(u8 PortID,u8 PinID,u8 Direction)
{
    if(PortID <4 && PinID <8){
        if(Direction == OUTPUT){
            switch (PortID)
            {
                case PORT_A:SET_BIT(DDRA,PinID); break;
                case PORT_B:SET_BIT(DDRB,PinID); break;
                case PORT_C:SET_BIT(DDRC,PinID); break;
                case PORT_D:SET_BIT(DDRD,PinID); break;

            }
        }
        else if(Direction == INPUT){
            switch (PortID)
            {
                case PORT_A:CLR_BIT(DDRA,PinID); break;
                case PORT_B:CLR_BIT(DDRB,PinID); break;
                case PORT_C:CLR_BIT(DDRC,PinID); break;
                case PORT_D:CLR_BIT(DDRD,PinID); break;

            }
        }
        else {
            //no code
        }
    }
    else {
        //no code
    }


}

void DIO_voidSetPortDirection(u8 PortID, u8 Direction)
{
    if(PortID<4)
    {
        if(Direction==OUTPUT)
        {
            switch(PortID)
            {
                case PORT_A:SET_PORT(DDRA);break;
                case PORT_B:SET_PORT(DDRB);break;
                case PORT_C:SET_PORT(DDRC);break;
                case PORT_D:SET_PORT(DDRD);break;
            }
        }
        else if(Direction==INPUT)
        {
            switch(PortID)
            {
                case PORT_A:CLR_PORT(DDRA);break;
                case PORT_B:CLR_PORT(DDRB);break;
                case PORT_C:CLR_PORT(DDRC);break;
                case PORT_D:CLR_PORT(DDRD);break;
            }
        }
    }
    else{
        //no code
    }
}



/*OUTPUT MODE*/
void DIO_voidSetPinValue(u8 PortID,u8 PinID,u8 Value)
{
    if(PortID <4 && PinID <8){
        if(Value==HIGH)
        {
            switch (PortID)
            {
                case PORT_A:SET_BIT(PORTA,PinID); break;
                case PORT_B:SET_BIT(PORTB,PinID); break;
                case PORT_C:SET_BIT(PORTC,PinID); break;
                case PORT_D:SET_BIT(PORTD,PinID); break;
            }
        }

        else if(Value==LOW){
            switch (PortID)
            {
                case PORT_A:CLR_BIT(PORTA,PinID); break;
                case PORT_B:CLR_BIT(PORTB,PinID); break;
                case PORT_C:CLR_BIT(PORTC,PinID); break;
                case PORT_D:CLR_BIT(PORTD,PinID); break;
            }
        }
        else {
            //no code
        }
    }
    else {
        //no code
    }
}


/*OUTPUT MODE*/
void DIO_voidSetPortValue(u8 PortID, u8 Value)
{
    if(PortID < 4 ){
        switch(PortID)
        {
            case PORT_A:SET_BYTE(PORTA,Value);break;
            case PORT_B:SET_BYTE(PORTB,Value);break;
            case PORT_C:SET_BYTE(PORTC,Value);break;
            case PORT_D:SET_BYTE(PORTD,Value);break;
        }

    }
    else {
        //no code
    }
}



/*INPUT MODE*/
u8 DIO_u8GetPinValue(u8 PortID,u8 PinID)
{
    if(PortID < 4 && PinID <8)
    {
        switch (PortID)
        {
            case PORT_A:return Get_Bit(PINA,PinID);
            case PORT_B:return Get_Bit(PINB,PinID);
            case PORT_C:return Get_Bit(PINC,PinID);
            case PORT_D:return Get_Bit(PIND,PinID);
        }
    }
    else
    {
        //no code
    }
}

/*OUTPUT MODE*/
void DIO_voidTogPin(u8 PortID, u8 PinID)
{
    if(PortID < 4 && PinID < 8 )
    {
        switch(PortID)
        {
        case PORT_A:TOG_BIT(PORTA,PinID);break;
        case PORT_B:TOG_BIT(PORTB,PinID);break;
        case PORT_C:TOG_BIT(PORTC,PinID);break;
        case PORT_D:TOG_BIT(PORTD,PinID);break;
        }
    }
    else {
        //no code
    }
}



