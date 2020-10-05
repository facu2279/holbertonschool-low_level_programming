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
     if (haystack[i] == needle[0])
       {
	 for (i2 = 0; needle[i2] != '\0'; i2++)
	   {
	     if (haystack[i + i2] != needle[i2] && needle[i2] != '\0')
	       {
		 return (haystack);
	       }else{
	       haystack = haystack + i;
	     }
	   }

       }
   }
return ('\0');
}
