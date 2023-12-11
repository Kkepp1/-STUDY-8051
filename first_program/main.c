#include <REGX52.H>

/*
* P0 no pull-up register --> need to a external respack
*/
sbit LED  = P0^0;
#define ON     0U
#define OFF    1U

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
  /* led default */
  LED=OFF;
  while(1)
  {
     /* toggle led */
     LED=!LED;
	 /* delay 500 ms */
	 Delay_ms(500);
  }

  return 0;
}