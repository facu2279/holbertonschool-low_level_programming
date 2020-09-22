#include "holberton.h"
/**
 * times_table - create a table of multiplication facts
 *
 * Return: print to stdout the 9 times table, starting with 0.
 */
void times_table(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
b = 0;
_putchar('0');
for (b = 1; b <= 9; b++)
{
if ((a * b) <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(a * b + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(a * b / 10 + '0');
_putchar(a * b % 10 + '0');
}
}
_putchar('\n');
}
}
