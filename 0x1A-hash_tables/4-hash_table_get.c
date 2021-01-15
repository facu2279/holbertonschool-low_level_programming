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
	unsigned int index = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				if (strcmp(key, tmp->key) == 0)
					return (tmp->value);
				tmp = tmp->next;
			}
		}
		index++;
	}
	return (NULL);
}
