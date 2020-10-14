#include "holberton.h"
#include <stdlib.h>
void free_grid(int **grid, int height)
{
	(void) height;
	free(grid);
}
