#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - sdafsa
 *@grid: sadf
 *@height: sadf
 *Return: sadf
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
