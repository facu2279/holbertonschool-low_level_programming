#include "holberton.h"
void print(int);
void times_table(void)
{
  int i;
  for(i = 0; i<= 9; i++)
    {
  print(i);
  _putchar('\n');
    }
}
void print(int multi)
{
  int i,res,a,b;
  for (i = 0; i <= 9; i++)
    {
      res=(i*multi);
      if (res == 0)
	{
	  _putchar('0');
	  if (i != 9)
	    {
	  _putchar(',');
	  _putchar(' ');
	  _putchar(' ');
	    }
	}
      else if (res <= 9)
	{
	_putchar(res + '0');
	if (i != 9)
	  {
	    _putchar(',');
	    _putchar(' ');
	    _putchar(' ');
	  }
	}
      else
	{
	a = res / 10;
	b = res % 10;
	_putchar(a + '0');
	_putchar(b + '0');
	if (i != 9)
	  {
	    _putchar(',');
	    _putchar(' ');
	  }
	}
	}
}
