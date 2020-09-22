#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98  - print numbers n to 98
 * @n: integer
 *
 * Return: print to stdout numbers n to 98 followed by a newline.
 */
void print_to_98(int n)
{
int i;
if (n >= 98)
{
for (i = n; i >= 98; i--)
{
printf("%i", i);
if (i != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
else
{
for (i = n; i <= 98; i++)
{
printf("%i", i);
if (i != 98)
{
printf(", ");
}
else
{
printf("\n");
}
}
}
}
