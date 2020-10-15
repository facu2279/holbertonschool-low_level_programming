#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - afd
 * @min: sadfa
 * @max: sadfa
 * Return: sadfa
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, tamano;

	if (min > max)
		return (NULL);
	tamano = max - min + 1;
	arr = malloc(tamano * 4);
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
