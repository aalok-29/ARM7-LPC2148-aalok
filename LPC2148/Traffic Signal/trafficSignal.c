#include<lpc214x.h> //importing LPC2148 library
#include<stdint.h>

void delay_ms(uint16_t j) //function for delay
{
	uint16_t x,i;
	for(i=0;i<j;++i)
	{
		for(x=0;x<60000;x++);
	}
	
}

int main(void)
{
	IO0DIR=0x000000FF;  // initializing pins 0.0 - 0.7 as output pins
	while(1)
	{
		IO0PIN=IO0PIN | 0x00000001; //sets pin 0.0 as high
		delay_ms(300);              //delay of 300 milliseconds
		IO0PIN=IO0PIN & 0xFFFFFF00;//sets pin 0.0 as low
		
		IO0PIN=IO0PIN | 0x00000002;//sets pin 0.1 as high
		delay_ms(300);             //delay of 300 milliseconds
		IO0PIN=IO0PIN & 0xFFFFFF00;//sets pin 0.1 aslow
		
		IO0PIN=IO0PIN | 0x00000004;//sets pin 0.2 as high
		delay_ms(300);             //delay of 300 milliseconds
		IO0PIN=IO0PIN & 0xFFFFFF00;//sets pin 0.2 as low
	}
}
