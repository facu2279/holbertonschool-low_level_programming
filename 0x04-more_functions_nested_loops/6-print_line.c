#include "holberton.h"
/**
 * print_line - print numbers from 0 to 14
 * @n: integer
 */
void print_line(int n)
{
int a;
if (n > 0)
{
for (a = n; a > 0; a--)
{
if (a <= 1)
{
_putchar('\n');
}
else
{
_putchar('_');
}
}
}
else
{
_putchar('\n');
}
}
