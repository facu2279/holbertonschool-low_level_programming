#include "holberton.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string
 * @accept: accept string
 * Return: count of accept
 */
unsigned int _strspn(char *s, char *accept)
{
  int i, j, k = 0;

  for (i = 0; s[i] != '\0'; i++)
    {
      for (j = 0; accept[j] != '\0'; j++)
	{
	  if (s[i] == accept[j])
	    {
	      k++;
	      break;
	    }
	}
      if (s[i] != accept[j])
	break;
    }
  return (k);
}
