#include "holberton.h"
/**
 * _print_rev_recursion - fdgsfd
 * @s: dfdssg
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

