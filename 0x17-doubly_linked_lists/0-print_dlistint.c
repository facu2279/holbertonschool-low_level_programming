#include "lists.h"
/**
 * print_dlistint - show all elements of a list
 * @h: pointer received
 * Return: # of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
