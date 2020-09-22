#include "holberton.h"
/**
 *print_last_digit - function to determine last digit
 *@a: integer
 *
 *Return: the value of the last digit
 */
int print_last_digit(int a)
{
a = a % 10;
if (a < 0)
{
a = a * (-1);
}
_putchar(a + '0');
return (a);
}
