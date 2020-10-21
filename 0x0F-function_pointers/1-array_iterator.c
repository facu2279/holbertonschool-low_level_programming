#include "function_pointers.h"
/**
 * array_iterator - gfds
 * @array: sdfgsd
 * @size: sdfg
 * @action: sdf
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
