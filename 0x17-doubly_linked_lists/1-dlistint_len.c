#include "lists.h"
/**
* dlistint_len - count the number of elements of a list.
* @h: list received
* Return: length of a list
*/
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}
