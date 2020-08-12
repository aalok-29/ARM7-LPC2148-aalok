#include<LPC214x.h>

void main()
{
	PINSEL0=0x8002;
	PWMPCR=0x600;
	PWMMR0=200000;
	PWMTCR=0x09;
	PWMMCR=0x02;
	
  while(1)
	{
		PWMMR1=75000;
		PWMMR2=175000;
		PWMLER=0x6;
	}
	
	
}
