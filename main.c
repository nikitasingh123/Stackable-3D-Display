#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRA=0xFF;  // This is for data direction register. This register will tell you what is the direction of data.
        /*
        
        If you want a single pin's control i.e Input/Output 

        Use this ----  DDRA =DDRA|(0x11111110); -- for A0 -- only set A0 as Output       
        
        
        */
    while (1) 
    {
		PORTA=0xFF;
		_delay_ms(1000);
		PORTA=0x00;
		_delay_ms(1000);

    /* 
    
    Alternate code

    PORTA ^=(1<PINA0);
    _delay_ms(1000);   
    
    */

    }
}

