/*
 * task 4-hash_table_get.c
 * Made by Facundo Diaz to Holberton School
 * Date - 14/01/2021
 */
#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: is the hash table you want to look into
* @key: is the key
* Return: Returns the value associated with the element, or NULL
* if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *aux_node;

index = key_index((unsigned const char*)(char *)key, ht->size);
aux_node = (ht->array)[index];
if (!aux_node)
{
free(aux_node);
return (NULL);
}
while (aux_node != NULL)
{
if (strcmp(key, aux_node->key) == 0)
break;
aux_node = aux_node->next;
}
if (aux_node == NULL)
return (NULL);
return (aux_node->value);
}
