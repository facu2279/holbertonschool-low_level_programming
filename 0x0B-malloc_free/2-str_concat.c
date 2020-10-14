#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - fdg
 * @s1: sdf
 * @s2: sadfa
 * Return : 
 */
char *str_concat(char *s1, char *s2)
{
  char *ar;
  int largo1, largo2, largototal, i , j, k;
  if (s1 != NULL && s2 != NULL)
    {
      for (largo1 = 0; s1[largo1] != '\0'; largo1++)
	{
	}
      for (largo2 = 0; s2[largo2] != '\0'; largo2++)
	{
	}
    }
  else
    {
      if (s1 == NULL)
	s1 = "";
      if (s2 == NULL)
	s2 = "";
      return (NULL);
    }
  
  largototal = largo1 + largo2;
  ar = (char *)malloc(largototal + 1);
  if (ar != NULL)
    {
      for (i = 0; i < largo1; i++)
	{
	  ar[i] = s1[i];
	}
      k = 0;
      for (j = i; j <= largototal; j++)
	{
	  ar[j] = s2[k];
	  k++;
	}
      return (ar);
    }
  else
    {
      return (NULL);
    }
}
