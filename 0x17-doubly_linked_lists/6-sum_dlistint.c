#include "lists.h"
/**
* sum_dlistint - sum all elements of a list
* @head: pointer to list
* Return: sum of all elements
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
