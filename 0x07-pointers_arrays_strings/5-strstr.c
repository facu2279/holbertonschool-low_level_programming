#include "holberton.h"
/**
 * _strstr - check the code for Holberton School students.
 * @haystack: int
 * @needle: int
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
  int i = 0, j = 0;
  while (haystack[i] != '\0')
    {
      while (needle[j] != '\0' && (haystack[i] == needle[0]))
	{
	  if (haystack[i + j] == needle[j])
	    {
	      j++;
	    }
	  else
	    {
	      break;
	    }
	}

      if (needle[j] != '\0')
	{
	  j = 0;
	  i++;
	}
      else
	{
	  return (haystack + i);
	}
    }
  return (0);
}
