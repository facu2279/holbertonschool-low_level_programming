#include "search_algos.h"

/**
 * jump_search - xd
 * Made by Facundo Diaz for Holberton School
 * @array: array received
 * @size: size
 * @value: value
 * Return: aaa
 */
int jump_search(int *array, size_t size, int value)
{
    size_t i, i2, sig;
    int pos;

    if (!array)
      return (-1);

    i = 0;
    sig = sqrt(size);
    i2 = sig;
    pos = array[i];
    printf("Value checked array[%lu] = [%d]\n", i2, pos);
    while (i2 < size && pos < value)
    {
        if (array[i2] >= pos)
	    break;
        i = i + sig;
	i2 = i2 + sig;
	pos = array[i];
	printf("Value checked array[%lu] = [%d]\n", i, pos);
    }
    if (i >= size)
        return (-1);
    if (pos > value)
        return (-1);
    printf("Value found between indexes [%lu] and [%lu]\n", i, i2);
    while (i <= calcmin(size - 1, i2) && pos <= value)
    {
        pos = array[i];
	printf("Value checked array[%lu] = [%d]\n", i, pos);
	if (pos == value)
	    return (i);
	i = i + 1;
    }
    return (-1);
}
/**
 * calcmin - aa
 * @primero: aa
 * @b: aa
 *
 * Return: The smaller of the two values, or a if equal
 */
size_t calcmin(size_t primero, size_t segundo)
{
    if (primero > segundo)
        return (primero);
    return (segundo);
}
