#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return the number of elements in list
 * @h: pointer received
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i = i + 1;
	}
	return (i);
}
