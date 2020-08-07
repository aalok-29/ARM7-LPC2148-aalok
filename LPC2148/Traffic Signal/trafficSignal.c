#include<lpc214x.h>
#include<stdint.h>
void delay()// function for 500ms delay
{
  T0MR0=1000000;    // load count for delay
T0MCR= 0X00000004; //stop on MR0
T0TCR=1;           //enable timer 0
while(T0TC!=T0MR0)	; // wait until TC reaches desired delay
	T0TC=0;           // reset timer
	
}


int main(void)
{int i;
	
	while(1)
	{
		
		for(i=5;i<8;++i)
		{
		IO0DIR=(1<<i); //initializing pin 10
		IO0SET = (1<<i);//setting pin 10 to high
		delay();       //wait for 500ms
		IO0CLR = (1<<i); //setting pin 10 to low
		delay();        //wait for 500ms
		}
	}
}
