#include<lpc214x.h>
#include<stdint.h>


int main(void)
{
	IO0DIR=0x00000005; //sets pin 0.0 and 0.2 as output pins
	
	while(1)
	{
		IO0PIN=IO0PIN | 0x00000001; //sets the pin 0.00 as high
		if((IO0PIN && 0x00000001 )== 0x00000000)//if pin 0.0 is low then set pin 0.2 as high 
		{
		IO0PIN=IO0PIN | 0x00000004;//setting pin 0.2 as high
		}
	
	}
}
