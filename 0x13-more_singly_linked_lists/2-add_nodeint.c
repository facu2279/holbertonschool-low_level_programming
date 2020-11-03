#include <stdlib.h>
#include "lists.h"
/**
 * add_node - add a new node to the list
 * @head: the head of the list
 * @str: the string to add
 * Return: the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/**
	 *if (n == NULL || head == NULL)
	 *	return (NULL);
	 */
	if(head == NULL)
		return(0);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (0);

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
