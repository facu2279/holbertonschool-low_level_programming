#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - sdf
 * @b:sdf
 * Return: asf
 */
void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = (char *)malloc(b);
	if (ar != NULL)
	{
		return (ar);
	}
	else
	{
		exit(98);
	}
}
