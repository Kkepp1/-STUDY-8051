#include <REGX52.H>

void Delay_ms(unsigned int t)
{
    int x,y;
	for(x=0;x<t;x++)
	{
	    for(y=0;y<123;y++)
		{
		    /* do nothing */
		}
	}
}

int main(void)
{
    /* default value */
	P0=0;
	while(1)
	{
	    P0=0xB7;
		Delay_ms(2000);
		P0=~0xB7;
		Delay_ms(2000);
	}
    return 0;
}