#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - check the code for Holberton School students.
 * @a: var
 * Return: Always 0.
 */
char *rot13(char *a)
{
  int i = 0, j = 0;
  char letra1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char letra2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
  while (*(a + i) != 0)
    {
      for (j = 0; j <= 52; j++)
	{
	  if (*(a + i) == letra1[j])
	    {
	      *(a + i) = letra2[j];
	      break;
	    }
	}
      i++;
    }
  return (a);
}
