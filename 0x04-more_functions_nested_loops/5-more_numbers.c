#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 14
 *
 */
void more_numbers(void)
{
  int i, a;

  for (i = 0; i < 15; i++)
    {
      if (i < 10)
	{
	  a = i;
	}else{
	a = i / 10;
	_putchar(a + '0');
	a = i % 10;
      }
      _putchar(a + '0');
    }
  _putchar('\n');
}