/*
 * task 3-hash_table_set.c
 * Made by Facundo Diaz to Holberton School
 * Date - 14/01/2021
 */
#include "hash_tables.h"
/**
* hash_table_set - gives you the index of a key
* @ht: is the hash table you want to add or update the key/value to
* @key: is the key
* @value: value is the value associated with the key
* Return:1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *aux_node = NULL;

	if (!key)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	aux_node = (ht->array)[index];
	while (aux_node != NULL)
	{
		if (strcmp(key, aux_node->key) == 0)
		{
			free(aux_node->value);
			aux_node->value = strdup(value);
			return (0);
		}
		aux_node = aux_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
	}
	else
	{
		new_node->next = (ht->array)[index];
		(ht->array)[index] = new_node;
	}
	return (1);
}
