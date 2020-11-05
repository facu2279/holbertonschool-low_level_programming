#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to pointer to starting a list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *anterior = NULL, *sig = NULL, *actual = *head;

	while (actual != NULL)
	{
		sig = actual->next;
		actual->next = anterior;
		anterior = actual;
		actual = sig;
	}
	*head = anterior;
	return ((*head));
}
