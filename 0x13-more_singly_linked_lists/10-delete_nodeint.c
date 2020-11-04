#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index index of a linked list
 * @head: first node of the list
 * @index: index
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, j = index;
	listint_t *aux, *aux2;

	if (*head == NULL)
		return (-1);
	aux = *head;
	if (index > 0)
	{
		j -= 1;
	}
	else
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	for (i = 0; i < j && aux != NULL; i++)
	{
		aux = aux->next;
	}
	if (aux != NULL && aux->next != NULL)
	{
		aux2 = aux->next;
		aux->next = aux2->next;
		free(aux2);
		return (1);
	}
	return (-1);
}
