#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum of all list
 * @head: pointer to start list
 * Return: the sum of all elements of list
 */
int sum_listint(listint_t *head)
{
	int cont = 0;

	while (head != NULL)
	{
		cont = cont + head->n;
		head = head->next;
	}
	return (cont);
}
