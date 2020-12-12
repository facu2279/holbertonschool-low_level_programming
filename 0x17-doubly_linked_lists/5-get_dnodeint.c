#include "lists.h"
/**
* get_dnodeint_at_index - search value of index and return list
* @head: pointer to list
* @index: index
* Return: list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *tmp;

tmp = head;
for (i = 0; i < index && tmp != NULL; i++)
{
tmp = tmp->next;
}
return (tmp);
}
/**
* OLD FUNCTION - XDXD
   * largo = dlistint_len(head);
   * aux = head;
   * printf("\n el largo es%i y el index es%i\n", largo, index);
   * if (index < largo)
   * {
    *    printf("entro");
      *  for (i = 0; i <= largo; i++)
      *  {
       *     aux = aux->next;
       * }
       * if (i != 0)
       *     return (aux);
       * else
    *return NULL;
    *}
    *else
    *{
    *    return NULL;
    *    printf("index mayor que largo");
    *    return (NULL);
    *}
*}
*size_t dlistint_len(const dlistint_t *h)
*{
*int i = 0;
*
*while (h)
*{
*i++;
*h = h->next;
*}
*return (i);
*}
*/
