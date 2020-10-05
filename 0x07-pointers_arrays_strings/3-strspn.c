#include "holberton.h"
/**
 * _strspn - sdfs
 * @s: asfasd
 * @accept: safas
 * Return: adfasd
 */
unsigned int _strspn(char *s, char *accept)
{
int i, i2, cont;
for (i = 0; s[i] != '\0'; i++)
{
for (i2 = 0; accept[i2] != '\0'; i2++)
{
if (s[i] == accept[i2])
{
cont = cont + 1;
break;
}
}
if (s[i] != accept[i2])
break;
}
return (i);
}
