#include "Std_Types.h"
#include "Bit_Math.h"

#include "DIO_private.h"
#include "DIO_config.h"
#include "DIO_int.h"


void DIO_voidsetdirection(u8 PortID,u8 PinID,u8 Direction)
{
    if(PortID <4 && PinID <8){
        if(Direction == OUTPUT){
            switch (PORTID)
            {
                case PORTa:SET_BIT(DDRA,PINID); break;
                case PORTb:SET_BIT(DDRB,PINID); break;
                case PORTc:SET_BIT(DDRC,PINID); break;
                case PORTd:SET_BIT(DDRD,PINID); break;

            }
        }
        else if(Direction == INPUT){
            switch (PORTID)
            {
                case PORTa:CLR_BIT(DDRA,PINID); break;
                case PORTb:CLR_BIT(DDRB,PINID); break;
                case PORTc:CLR_BIT(DDRC,PINID); break;
                case PORTd:CLR_BIT(DDRD,PINID); break;

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
                case PORTA:SET_PORT(PORTA);break;
                case PORTB:SET_PORT(PORTB);break;
                case PORTC:SET_PORT(PORTC);break;
                case PORTD:SET_PORT(PORTD);break;
            }
        }
        else if(Direction==INPUT)
        {
            switch(PortID)
            {
                case PORTA:CLR_PORT(PORTA);break;
                case PORTB:CLR_PORT(PORTB);break;
                case PORTC:CLR_PORT(PORTC);break;
                case PORTD:CLR_PORT(PORTD);break;
            }
        }
    }
    else{
        //no code
    }
}



/*OUTPUT MODE*/
void DIO_voidsetPinValue(u8 PortID,u8 PinID,u8 Value)
{
    if(PortID <4 && PinID <8){
        if(Value==HIGH)
        {
            switch (PORTID)
            {
                case PORTA:SET_BIT(PORTA,PINID); break;
                case PORTB:SET_BIT(PORTB,PINID); break;
                case PORTC:SET_BIT(PORTC,PINID); break;
                case PORTD:SET_BIT(PORTD,PINID); break;
            }
        }

        else if(Value==LOW){
            switch (PORTID)
            {
                case PORTA:CLR_BIT(PORTA,PINID); break;
                case PORTB:CLR_BIT(PORTB,PINID); break;
                case PORTC:CLR_BIT(PORTC,PINID); break;
                case PORTD:CLR_BIT(PORTD,PINID); break;
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
    if(PortID <4 && PinID <8){
        switch(PortID)
        {
            case PORTA:SET_BYTE(PORTA,Value);break;
            case PORTB:SET_BYTE(PORTB,Value);break;
            case PORTC:SET_BYTE(PORTC,Value);break;
            case PORTD:SET_BYTE(PORTD,Value);break;
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
        switch (PORTID)
        {
            case PORTA:Get_Bit(PINA,PinID);break;
            case PORTB:Get_Bit(PINB,PinID);break;
            case PORTC:Get_Bit(PINC,PinID);break;
            case PORTD:Get_Bit(PIND,PinID);break;
        }
    }
    else
    {
        //no code
    }
}

/*OUTPUT MODE*/
void DIO_voidTogglePin(u8 PortID, u8 PinID)
{
    if(PortID < 4 && PinID < 8 )
    {
        switch(PortID)
        {
        case PORTA:TOG_BIT(PORTA,PinID);break;
        case PORTB:TOG_BIT(PORTB,PinID);break;
        case PORTC:TOG_BIT(PORTC,PinID);break;
        case PORTD:TOG_BIT(PORTD,PinID);break;
        }
    }
    else {

    }
}



