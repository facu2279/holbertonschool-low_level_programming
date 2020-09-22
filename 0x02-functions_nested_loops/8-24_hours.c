#include "holberton.h"
void jack_bauer(void)
{
  int h,h2,m,m2,tope;
  tope = 9;
  for(h = 0; h <= 2; h++)
    {
      for(h2 = 0; h2 <= tope; h2++) 
	{
	  for(m = 0; m <= 5; m++) 
	    {
	      for(m2 = 0; m2 <= 9; m2++) 
		{
		  if (h == 2)
		    {
		      tope = 3;
		    }
		  _putchar(h + '0');
		  _putchar(h2 + '0');
		  _putchar(':');
		  _putchar(m + '0');
		  _putchar(m2 + '0');
		  _putchar('\n');
		}
	    }
	}
    }
}
