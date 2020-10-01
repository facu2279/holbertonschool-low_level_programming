#include "holberton.h"
/**
 * _strcat - fsdf
 * @dest: sfsad
 * @src: sdfs
 * Return: asd
 */
char *_strcat(char *dest, char *src)
{
int i, i2, i3, largo;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (i2 = 0; src[i2] != '\0'; i2++)
{
}
i2--;
largo = i + i2;
for (i3 = i, i = 0; i3 <= largo; i3++)
{
dest[i3] = src[i];
i++;
}
dest[largo + 1] = '\0';
return (dest);
}
