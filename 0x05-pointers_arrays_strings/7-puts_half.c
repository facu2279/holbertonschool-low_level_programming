#include "holberton.h"
void puts_half(char *str)
{
  int i, a;
  for(i = 0; str[i] != '\0'; i++)
    {
    }
  if(i % 10 != 0)
    {
      i = i-1;
    }
  for (a = i / 2; a <= i; a++)
    {
      _putchar(str[a]);
    }
  _putchar('\n');
}
