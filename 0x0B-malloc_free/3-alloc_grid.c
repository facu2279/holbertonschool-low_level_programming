#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - fdfgdfgdf
 * @width: sfdsads
 * @height: sadfasdf
 * Return: sadasd
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		arr[i][j] = 0;
	return (arr);
}
