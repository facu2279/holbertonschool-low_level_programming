#include "function_pointers.h"
/**
 * int_index - asdf
 * @array: sdf
 * @size: asdf
 * @cmp: asdf
 * Return: sdf
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res == 1)
			return (i);
	}
	return (-1);
}
