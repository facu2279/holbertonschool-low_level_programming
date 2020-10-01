#include "holberton.h"
/**
 * char *_strncpy - function thsdfsdfsdft copies a string
 * @dest: destination string
 * @src: source string
 * @n: max byte of src from dest
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i, a = 0;
  for (i = 0; src[i] != '\0'; i++)
    {
    }
  if (n > i)
    {
      n = i;
    }
  while (a <= n)
    {
      dest[a] = src[a];
      a++;
    }
  return (dest);
}
