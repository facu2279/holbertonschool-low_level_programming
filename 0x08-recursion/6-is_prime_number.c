#include "holberton.h"
/**
 * isp - sfdgfd
 * @a: sadfas
 * @n: asdfa
 * Return: sadf
 */
int isp(int a, int n)
{
if (a < n)
{
if (n % a == 0)
{
return (0);
}
else
{
return (isp(a + 1, n));
}
}
return (1);
}
/**
 *is_prime_number - sadfas
 *@n: asdfsa
 * Return: asdfas
 */
int is_prime_number(int n)
{
if (n <= 0 || n == 1)
{
return (0);
}
return (isp(2, n));
}
