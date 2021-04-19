#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * Made by Facundo Diaz for Holberton School 2021
 * @array: array to search on
 * @size: size of array
 * @value: value to search
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
