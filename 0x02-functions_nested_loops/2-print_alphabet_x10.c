#include "holberton.h"
void print_alphabet(void)
{
  char a;
  for(a = 'a'; a <= 'z'; a++)
    {
      _putchar(a);
    }
  _putchar('\n');
}
void print_alphabet_x10(void)
{
  int i;
  for ( i='0'; i<='9'; i++)
    {
      print_alphabet();
    }
}

