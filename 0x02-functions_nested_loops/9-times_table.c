#include "holberton.h"
void spacecom(void);
void enter(void);
void print(int);
void times_table(void)
{
  print(0);
  _putchar('\n');
  print(1);
  _putchar('\n');
  print(2);
  _putchar('\n');
  print(3);
  _putchar('\n');
  print(4);
  _putchar('\n');
 print(5);
 _putchar('\n');
  print(6);
  _putchar('\n');
  print(7);
  _putchar('\n');
  print(8);
  _putchar('\n');
  print(9);
  _putchar('\n');

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
