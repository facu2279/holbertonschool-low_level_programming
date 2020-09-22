#include <stdio.h>
/**
 * main - program to print fibonacci sequence (first 50)
 * Return: 0
 */
int main(void)
{
  long int a, b, c;
  a = 0;
  b = 1;
  c = 0;
  while (c <= 4000000)
    {
      c = a + b;
      if (c % 2 == 0)
	{
      printf("%ld", c);
      if (c + b <= 4000000)
	{
	  printf(", ");
	}
	}
      a = b;
      b = c;
    }
  putchar('\n');
  return (0);
}
