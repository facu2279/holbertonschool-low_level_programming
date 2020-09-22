#include "holberton.h"
#include <stdio.h>
/**
 * main - program to print fibonacci sequence (first 50)
 * Return: 0
 */
int main(void)
{
long int a, b, c, i;
a = 0;
b = 1;
for (i = 0; i <= 49; i++)
{
c = a + b;
printf("%ld", c);
if (i != 49)
{
printf(", ");
}
a = b;
b = c;
}
putchar('\n');
return (0);
}

