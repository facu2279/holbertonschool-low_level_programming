#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - dfsdf
 * @s: sfad
 * @c: asfasd
 * Return: asdfasdf
 */
char *_strchr(char *s, char c)
{
  int i;
  for (i = 0; s[i] != '\0'; i++)
    {
      if(s[i] == c)
	{
	  return (s + i);
	  break;
	}
    }
  return (NULL);
}