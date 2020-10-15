#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - asdfsdf
 *@ptr: sdfasdf
 *@old_size: asdfas
 *@new_size: asdfasdf
 *Return: aadfas
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
	{
		((char *)arr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (arr);
}
