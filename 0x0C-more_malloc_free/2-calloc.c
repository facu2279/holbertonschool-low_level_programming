#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - afdgsd
 *@nmemb: adfasf
 *@size: sadfsdfsa
 *Return: sadfasdf
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i, tamano;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	tamano = nmemb * size;
	arr = malloc(tamano);
	if (arr != NULL)
	{
		for (i = 0; i < tamano; i++)
		{
			arr[i] = 0;
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
