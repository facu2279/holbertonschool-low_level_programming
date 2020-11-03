#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index -  return the nth node of a linked list
 * @head: pointer to starting of list
 * @index: index of list
 * Return: value of index selected
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *aux;

	if (head == NULL)
		return (NULL);

	aux = head;

	for (i = 0; i < index && aux != NULL; i++)
	{
		aux = aux->next;

	}
	if (aux == NULL)
		return (0);

	return (aux);
}
