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
      for (i = 1; str[i] != '\0'; i++)
	{
	}
      size = i;
      ar = (char *)malloc(size);
      if (ar != NULL)
	{
	  for (i = 0; i < size; i++)
	    {
	      ar[i] = str[i];
	    }
	  return (ar);
	}
      else
	{
	  return (NULL);
	}
    }
  else
    {
      return (NULL);
    }
}
