#include "holberton.h"
#include <stdio.h>
/**
 * main - program to print fibonacci sequence (first 50)
 * Return: 0
 */
int main(void)
{
unsigned long a, b, c;
a = 0;
b = 1;
c = 0;
while (c <= 4000000)
{
c = a + b;
if (c % 2 == 0)
{
printf("%lu", c);
 if (c != 3524578)
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
