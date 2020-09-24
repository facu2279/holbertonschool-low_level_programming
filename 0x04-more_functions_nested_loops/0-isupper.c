#include "holberton.h"
/**
 * _isupper- check c lowercase character
 * @c: string
 * Return: return 1 if c lowercase, 0 if not
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
