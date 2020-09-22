#include "holberton.h"
/**
 * _islower- check c lowercase character
 * @c: string
 * Return: return 1 if c lowercase, 0 if not
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
