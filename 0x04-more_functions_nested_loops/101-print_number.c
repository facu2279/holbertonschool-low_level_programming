#include "holberton.h"
void print_number(int n)
{
  int a, b, c;
  if (n < 0)
    {
      n = n * (-1);
      _putchar('-');
    }
  
      if (n < 9)
	{
	  _putchar(n +'0');
	}

      if ((n > 9 && n <= 99) || (n < -9 && n > -99))
	{
	  a = n / 10;
	  b = n % 10; 
	}

      if ((n > 99 && n <= 999) || (n < -99 && n > -999))
	{
	  a = n / 100;
	  b = n / 10;
	  b = b % 10;
	  c = n / 10;
	  _putchar(a + '0');
	  _putchar(b + '0');
	  _putchar(c + '0');
	}

      if ((n > 999) || (n < -999))
	{
	  a = n / 1000;
	  b = n / 100;
	  b = b % 10;
	  c = n / 10;
	  c = c % 10;
	  n = n % 10;
	  _putchar(a + '0');
	  _putchar(b + '0');
	  _putchar(c + '0');
	  _putchar(n + '0');
	}
}
