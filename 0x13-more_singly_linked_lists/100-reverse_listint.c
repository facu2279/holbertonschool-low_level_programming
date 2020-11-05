#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to pointer to starting a list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return ((*head));
}
