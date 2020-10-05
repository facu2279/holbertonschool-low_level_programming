#include "holberton.h"
/**
 * _strstr - dfgsd
 * @haystack: sdfa
 * @needle: afa
 * Return: sadf
 */
char *_strstr(char *haystack, char *needle)
{
int i, i2;

 for (i = 0; haystack[i] != '\0'; i++)
   {
     for (i2 = 0; needle[i2] != '\0'; i2++)
       {
	 if (haystack[i] != needle[i2])
	   {
	     return (needle + i);
	   }
       }
   }
 return ('\0');
}
