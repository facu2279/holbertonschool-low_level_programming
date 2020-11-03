#include "lists.h"
/**
 * print_listint - print a list of integers
 * @h: pointer received
 * Return: number of nodes received
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	i = i + 1;
	h = h->next;
	}
	return (i);
}
