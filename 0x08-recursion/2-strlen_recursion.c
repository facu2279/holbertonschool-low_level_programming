#include "holberton.h"
/**
 * _strlen_recursion - fdgsd
 * @s: gfdgsd
 * Return: sadfa
 */
int _strlen_recursion(char *s)
{
int cont = 0;
if (*s != 0)
{
s++;
cont = cont + 1 + _strlen_recursion(s);
}
else
{
return (0);
}
return (cont);
}
