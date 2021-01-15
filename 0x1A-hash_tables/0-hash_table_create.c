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
	hash_table_t *new_ht;
	unsigned int i;

	if (size < 1)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->array = malloc(sizeof(void *) * size);
	if (new_ht == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	new_ht->size = size;

	return (new_ht);
}
