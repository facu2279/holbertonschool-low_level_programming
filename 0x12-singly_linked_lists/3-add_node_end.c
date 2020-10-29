#include "lists.h"

/**
 * _strlen - count the leng of s
 * @s: pointer received
 * Return: the lenght of the character received
 */

int _strlen(const char *s)
{

	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
/**
 * add_node_end - add a new node to the end of the list
 * @head: the head of the list
 * @str: the string to add
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
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
