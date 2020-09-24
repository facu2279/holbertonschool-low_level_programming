#include "holberton.h"
/**
 * print_diagonal - print numbers from 0 to 14
 * @n: integer
 */
void print_diagonal(int n)
{
int a, b, i;
if (n > 0)
{
for (a = 1; a <= n; a++)
{
b = a - 1;
for (i = 1; i <= b; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
