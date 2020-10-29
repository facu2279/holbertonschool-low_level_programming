#include "lists.h"
#include <stdio.h>
/**
 * print_list - print a list
 * @h: pointer received
 * Return: number of nodes received
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i = i + 1;
		h = h->next;
	}
	return(i);
}
