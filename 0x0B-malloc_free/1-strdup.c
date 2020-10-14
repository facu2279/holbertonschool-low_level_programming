#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - sadf
 * @str: sadf
 * Return : sadf
 */
char *_strdup(char *str)
{
  char *ar;
  int size, i;

  if (str != NULL)
    {
      for (i = 0; str[i] != '\0'; i++)
	{
	}
    }
  else
    {
      return (NULL);
    }

  size = i;

  if (size == 0)
    {
      return (NULL);
    }
  else
    {
      ar = (char *)malloc(size);
      
      if (ar == NULL)
	{
	  return (NULL);
	}
      else
	{
	  for (i = 0; i <= size; i++)
	    {
	      ar[i] = str[i];
	    }
	  return (ar);
	}
    }
}
