/*
 * 2D LED.c
 *
 * Created: 29-05-2018 21:35:01
 * Author : ANUBHAV
 */ 

#include <avr/io.h>
#include <util/delay.h >
#include <math.h>
void light(int x,int y){
	    int a,b,c,d;
		  
		 a=b=c=d=0;
		 b=x%2;
		 x=x/2;
		 a=x%2;
		 d=y%2;
		 y=y/2;
		 c=y%2;
		PORTA=(a<<PA0)|(b<<PA1)|(c<<PA2)|(d<<PA3);
	
}
int main(void)
{
    DDRA=0xFF;
    while (1) 
    {  
		light(0,0);
		_delay_us(2);
		light(0,1);
		_delay_us(2);
		light(0,2);
		_delay_us(2);
		light(0,3);
		_delay_us(2);
		light(1,0);
		_delay_us(2);
		light(1,1);
		_delay_us(2);
		light(1,2);
		_delay_us(2);
		light(1,3);
		_delay_us(2);
		light(2,0);
		_delay_us(2);
		light(2,1);
		_delay_us(2);
		light(2,2);
		_delay_us(2);
		light(2,3);
		_delay_us(2);
		light(3,0);
		_delay_us(2);
		light(3,1);
		_delay_us(2);
		light(3,2);
		_delay_us(2);
		light(3,3);
		_delay_us(2);
		
	 
    }
}

