#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size: integer
 */
void print_triangle(int size)
{
int a, b, x;
x = size - 1;
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
if (b <= x)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
x = x - 1;
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
