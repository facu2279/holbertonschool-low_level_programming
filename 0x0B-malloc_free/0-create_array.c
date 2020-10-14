#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - sfgs
 *@size: sfsa
 *@c: asdfd
 *Return: sdfg
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i = 0;

if (size <= 0)
{
return (NULL);
}
else
{
ar = (char *)malloc(size);
if (ar != NULL)
{
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
else
{
return (NULL);
}
}
}
