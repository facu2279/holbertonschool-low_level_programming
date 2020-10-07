#include "holberton.h"
/**
 * sqr - sfdgfd
 * @a: sadfas
 * @v: asdfa
 * Return: sadf
 */
int sqr(int a, int v)
{
if (a * a == v)
{
return (a);
}
else if (a * a > v)
{
return (-1);
}
return (sqr(a + 1, v));
}
/**
 *_sqrt_recursion - sadfas
 *@n: asdfsa
 * Return: asdfas
 */
int _sqrt_recursion(int n)
{
return (sqr(1, n));
}
