#include<regx52.h>
void delay(unsigned int a)
{
	while(a--);
	
}

unsigned int i=0;
void main()
{
	P2=~0x01;//LED
	while(1)
	{
	if(P3_1==0) //°´Å¥
	{
		delay(20);
		while(P3_1==0);
		delay(20);
		i++;
		if(i>=8)
		{
			i=0;
		}
		P2=~(0x01<<i);
	}
	if(P3_0==0) //°´Å¥
	{
		delay(20);
		while(P3_0==0);
		delay(20);
		if(i==0)
		{
			i=7;
		}
		else
		{
			i--;
		}
		P2=~(0x01<<i);
	}
	}
}