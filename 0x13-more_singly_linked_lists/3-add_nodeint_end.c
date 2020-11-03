#include "lists.h"
/**
 * add_node_end - add a new node to the end of the list
 * @head: the head of the list
 * @str: the string to add
 * Return: the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new, *aux;

	if (!head || !str)
		return (0);
	aux = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (0);
	}
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = new;
	return (new);
}
