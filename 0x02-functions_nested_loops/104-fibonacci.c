#include "holberton.h"
#include <stdio.h>
/**
 * main - program to print fibonacci sequence (first 50)
 * Return: 0
 */
int main(void)
{
  unsigned long long int a, b, c, i;
  a = 0;
  b = 1;
  for (i = 0; i <= 98; i++)
    {
      c = a + b;
      printf("%llu", c);
      if (i != 98)
	{
	  printf(", ");
	}
      a = b;
      b = c;
    }
  putchar('\n');
  return (0);
}
