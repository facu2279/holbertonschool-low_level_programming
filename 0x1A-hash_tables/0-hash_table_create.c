/*
 * task 0-hash_table_create.c
 * Made by Facundo Diaz to Holberton School
 * Date - 14/01/2021
 */
#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: is the size of the array
* Return: Returns a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **new_arr = NULL;
	hash_table_t *new_ht = NULL;

	new_ht = malloc(sizeof(hash_table_t));
	new_arr = malloc(sizeof(hash_node_t *) * size);
	if (!new_arr | !new_ht)
	{
		free(new_arr);
		free(new_ht);
		return (NULL);
	}
	new_ht->size = size;
	new_ht->array = new_arr;
	return (new_ht);
}
