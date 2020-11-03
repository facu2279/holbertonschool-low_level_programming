#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert nodeint at index
 * @head: pointer to start list
 * @idx: index where i need insert value
 * @n: value
 * Return: the sum of all elements of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *aux, *new;

	if (*head == NULL)
		return (0);
	aux = *head;
	for (i = 0; i < (idx - 1) && aux != NULL; i++)
	{
	aux = aux->next;
}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
	free(new);
	return (0);
}
	new->n = n;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
