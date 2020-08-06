#include<lpc214x.h>
#include<stdint.h>

void delay_ms()// function for 100ms delay
{
  T0MR0=100000;    // load count for delay
T0MCR= 0X00000004; //stop on MR0
T0TCR=1;           //enable timer 0
while(T0TC!=T0MR0)	; // wait until TC reaches desired delay
	T0TC=0;           // reset timer
	
}

int main(void)
{
	IO0DIR=0x000000FF; //initialising P0.0-P0.07 as output
		while(1)
	{
		IO0PIN=IO0PIN | 0x00000001; //set P0.0 as high
		delay_ms();                 //100ms delay
		IO0PIN=IO0PIN & 0xFFFFFF00; //set p0.0 as low
		delay_ms();                 //100ms delay
		
	}
}
