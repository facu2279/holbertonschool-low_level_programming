#include "holberton.h"
/**
 * puts2 - sdff
 * @str: sdfasd
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i = i + 2)
{
_putchar(str[i]);
}
putchar('\n');
}
