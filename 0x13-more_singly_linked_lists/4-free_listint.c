#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a list
 * @head: the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
