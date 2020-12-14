#include "holberton.h"
/**
 * _abs - compute absolute value of integer
 * @a: integer
 *
 * Return: return absolute value for an integer
 */
int _abs(int a)
{
if (a < 0)
{
a = a * (-1);
}
return (a);
}
