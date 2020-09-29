#include "holberton.h"
/**
 * puts_half - sfdfs
 * @str: fsadf
 */
void puts_half(char *str)
{
int i, a;
for(i = 0; str[i] != '\0'; i++)
{
}
if(i % 2 != 0)
{
i = i - 1;
}
for (a = i / 2; str[a] <= i; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
