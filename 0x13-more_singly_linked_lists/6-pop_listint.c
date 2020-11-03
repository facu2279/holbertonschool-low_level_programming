#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - save first element and free head
 * @head: pointer to starting list
 * Return:  value of first element
 */
int pop_listint(listint_t **head)
{
	int res;
	listint_t *aux;

	res = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (res);
}
