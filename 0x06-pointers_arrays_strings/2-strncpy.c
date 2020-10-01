#include "holberton.h"
/**
 *_strncpy - asdf
 *@dest: sadf
 *@src: sdfsad
 *@n: sdfas
 *Return: sfd
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, i2;
for (i = 0; src[i] != '\0'; i++)
{
}
if (n > i)
{
n = i;
}
for (i2 = 0; i2 < n; i2++)
{
dest[i2] = src[i2];
}
dest[i] = '\0';
return (dest);
}
