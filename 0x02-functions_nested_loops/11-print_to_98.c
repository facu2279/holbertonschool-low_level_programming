#include "holberton.h"
void print_to_98(int n)
{
  int a,b,i,c;
  if (n >= 98)
    {
      for (i = n; i >= 98; i--)
	{
	  a = i / 100;
	  b = (i / 10) % 10;
	  c = i % 10;
	  if (a != 0)
	    {
	      _putchar(a + '0');
	    }
	  _putchar(b + '0');
	  _putchar(c + '0');
	  if (i != 98)
	    {
	      _putchar(',');
	      _putchar(' ');
	    }


	}
    }
  else
    {
    for (i = n; i <= 98; i++)
      {
	if (i < 0)
	  {
	    a = ((-1) * (i / 10));
	    b = ((-1) * (i % 10));
	    _putchar('-');
	    _putchar(a + '0');
	    _putchar(b + '0');
	  }
	else
	  {
	  a = (i / 10);
	  b = (i % 10);
	  if (a != 0)
	    {
	      _putchar(a + '0');
	    }
	  _putchar(b + '0');
	  }
    if (i != 98)
	 {
	   _putchar(',');
	   _putchar(' ');
	 }
      }
    }
  _putchar('\n');
}
