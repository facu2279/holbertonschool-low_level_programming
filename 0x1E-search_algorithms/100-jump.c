#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Made by Facundo Diaz for HHBTN 2021
 * @array: array
 * @size: size
 * @value: value
 * Return: xx
 */
int jump_search(int *array, size_t size, int value)
{
size_t i, i2, salto;
int pos;

if (array)
{
salto = sqrt(size);
i = 0;
i2 = salto;
pos = array[i];
printf("Value checked array[%lu] = [%d]\n", i, pos);
while (i2 < size && pos < value)
{
if (array[i2] >= value)
break;
i = i + salto;
i2 = i2 + salto;
pos = array[i];
printf("Value checked array[%lu] = [%d]\n", i, pos);
}
if (i >= size || pos > value)
return (-1);
printf("Value found between indexes [%lu] and [%lu]\n", i, i2);
while (i <= calcmin(size - 1, i2) && pos <= value)
{
pos = array[i];
printf("Value checked array[%lu] = [%d]\n", i, pos);
if (pos == value)
return (i);
i++;
}
}
return (-1);
}
/**
 * calcmin - finds the minimum of two values
 * @primero: a
 * @segundo: a
 * Return: xd
 */
size_t calcmin(size_t primero, size_t segundo)
{
if (segundo < primero)
return (segundo);
return (primero);
}
