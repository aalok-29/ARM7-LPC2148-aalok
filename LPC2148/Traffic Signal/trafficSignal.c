#include<lpc214x.h>
#include<stdint.h>

void delay_ms(uint16_t j)
{
	uint16_t x,i;
	for(i=0;i<j;++i)
	{
		for(x=0;x<6000;x++);
	}
	
}

int main(void)
{
	IO0DIR=0x000000FF;
	while(1)
	{
		IO0PIN=IO0PIN | 0x00000001;
		delay_ms(300);
		IO0PIN=IO0PIN & 0xFFFFFF00;
		//delay_ms(300);
		IO0PIN=IO0PIN | 0x00000002;
		delay_ms(300);
		IO0PIN=IO0PIN & 0xFFFFFF00;
		//delay_ms(300);
		IO0PIN=IO0PIN | 0x00000004;
		delay_ms(300);
		IO0PIN=IO0PIN & 0xFFFFFF00;
	}
}
