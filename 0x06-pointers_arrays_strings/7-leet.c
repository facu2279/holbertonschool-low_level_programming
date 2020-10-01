#include "holberton.h"
/**
 *leet - sdfs
 *@s: sdfsd
 *Return: sdfa
 */ 
char *leet(char *s)
{
  int i, i2;
  char my[]="a4A4e3E3o0O0t7T7l1L1";
  for (i = 0; s[i] != '\0'; i++)
    {
      for (i2 = 0; my[i2] != '\0'; i2= i2 +2)
	{
	  if (s[i] == my[i2])
	    {
	      s[i] = my[i2 + 1];
	    }
	}
    }
      return (s);
}
