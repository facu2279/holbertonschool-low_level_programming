#include "holberton.h"
/**
 * _strpbrk - fdgsd
 * @s: safasd
 * @accept: sdfsa
 * Return: sfds
 */
char *_strpbrk(char *s, char *accept)
{
  int i, i2;

  for (i = 0; s[i] != '\0'; i++)
    {
      for (i2 = 0; accept[i2] != '\0'; i2++)
	{
	  if (s[i] == accept[i2])
	    {
	      return (s + i);
	    }
	}
    }

  return ('\0');
}
