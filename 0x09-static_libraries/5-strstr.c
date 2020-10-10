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
int i = 0, i2 = 0;
while (haystack[i] != '\0')
{
while (needle[i2] != '\0' && (haystack[i] == needle[0]))
{
if (haystack[i + i2] == needle[i2])
{
i2++;
}
else
{
break;
}
}
if (needle[i2] != '\0')
{
i2 = 0;
i++;
}
else
{
return (haystack + i);
}
}
return (0);
}
