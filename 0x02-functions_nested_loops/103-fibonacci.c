#include "holberton.h"
#include <stdio.h>
/**
 * main - program to print fibonacci sequence (first 50)
 * Return: 0
 */
int main(void)
{
unsigned long a, b, c, i;
a = 0;
b = 1;
for (i = 0; i <= 4000000; i++)
{
c = a + b;
if (c % 2 == 0)
{
printf("%lu", c);
if (i != 4000000)
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
