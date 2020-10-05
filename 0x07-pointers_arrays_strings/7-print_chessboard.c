#include "holberton.h"
/**
 * print_chessboard - sfdgsd
 * @a: asdfasd
 */
void print_chessboard(char (*a)[8])
{
int i, i2;
for (i = 0; i <= 7; i++)
{
for (i2 = 0; i2 <= 7; i2++)
{
_putchar(a[i][i2]);
if (i2 == 7 && i < 8)
{
_putchar('\n');
}
}
}
}
