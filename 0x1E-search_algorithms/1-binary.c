#include "search_algos.h"
#include <unistd.h>
/**
 * binary_search - get THE number
 * @array: Array to work with
 * @size: Size of the array
 * @value: Value to search
 * Return: 0 or -1
 */

int binary_search(int *array, size_t size, int value)
{
  size_t left, right, middle, counter;

  if (array == NULL)
    {
      return (-1);
    }

  left = 0;
  right = size - 1;

  while (left <= right)
    {
      printf("Searching in array: ");
      for (counter = left; counter <= right; counter++)
	{
	  printf("%i", array[counter]);
	  if (counter < right)
	    {
	      printf(", ");
	    }
	  else
	    {
	      printf("\n");
	    }
	}
      middle = (left + right) / 2;
      if (array[middle] == value)
	{
	  return (middle);
	}
      if (array[middle] < value)
	{
	  left = middle + 1;
	}
      if (array[middle] > value)
	{
	  right = middle - 1;
	}
    }
  return (-1);
}
