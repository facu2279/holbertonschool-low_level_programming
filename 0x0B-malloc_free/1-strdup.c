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
  for (i = 0; str[i] != '\0'; i++)
    {
    }
  size = i;
  ar = (char*)malloc(size);
  for (i = 0; i < size; i++)
    {
      ar[i] = str[i];
    }
  return (ar);
}
