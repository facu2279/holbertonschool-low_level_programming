#include "holberton.h"
/**
 * print_square - print numbers from 0 to 14
 * @size: integer
 */
void print_square(int size)
{
int a, b;
if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = 1; b <= size; b++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
