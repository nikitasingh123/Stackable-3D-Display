/*
 * rough.c
 *
 * Created: 26-05-2018 23:58:50
 * Author : ANUBHAV
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRA=0xFF;
    while (1) 
    {
		PORTA=0xFF;
		_delay_ms(1000);
		PORTA=0x00;
		_delay_ms(1000);
    }
}

