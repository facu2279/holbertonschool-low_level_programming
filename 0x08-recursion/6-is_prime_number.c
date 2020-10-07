#include "holberton.h"
/**
 * sqr - sfdgfd
 * @a: sadfas
 * @v: asdfa
 * Return: sadf
 */
int sqr(int a, int v)
{
  if (v % a == 0 || a != 1)
    {
      return (0);
    }else
    return (sqr(a - 1, v));
}
/**
 *_sqrt_recursion - sadfas
 *@n: asdfsa
 * Return: asdfas
 */
int _sqrt_recursion(int n)
{
  return (sqr(n - 1, n));
}
