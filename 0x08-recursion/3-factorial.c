#include "holberton.h"
/**
 * factorial - fdgsd
 * @n: asdfdsa
 * Return: sgfs
 */
int factorial(int n)
{
if (n < 1 && n > -1)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
