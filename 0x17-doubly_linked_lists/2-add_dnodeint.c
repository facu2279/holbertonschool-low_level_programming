#include "lists.h"
/**
* add_dnodeint - add node in a lsit
* @head: pointer to double list
* @n: const integer
* Return: a new list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;

newnode = malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->prev = NULL;
if (*head == NULL)
{
newnode->next = NULL;
*head = newnode;
}
else
{
newnode->next = *head;
(*head)->prev = newnode;
*head = newnode;
}
return (newnode);
}
