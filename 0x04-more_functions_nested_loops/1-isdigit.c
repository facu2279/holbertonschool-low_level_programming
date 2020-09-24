#include "holberton.h"
/**
 * _isdigit- check c lowercase character
 * @c: string
 * Return: return 1 if c lowercase, 0 if not
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
