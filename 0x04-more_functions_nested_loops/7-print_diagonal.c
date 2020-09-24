#include "holberton.h"
void spaces(int c);
void print_diagonal(int n)
{
  int a;
  if (n > 0)
    {
      for (a = 1; a <= n; a++)
	{
	  spaces(a);
	  _putchar(47);
	  _putchar('\n');
	}
    }else{

  _putchar('\n');
  }
}
void spaces(int c)
{
  int a;
  for (a = 0; a <= c; a++)
    {
      _putchar(' ');
    }
}
