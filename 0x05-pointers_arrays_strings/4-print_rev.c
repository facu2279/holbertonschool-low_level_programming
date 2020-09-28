#include "holberton.h"
void print_rev(char *s)
{
  int i, b;
  for (i = 0; s[i] != '\0'; i++)
    {
    }
  for (b = i-1; b >= 0; b--)
    {
      _putchar(s[b]);
    }
  _putchar('\n');
}
