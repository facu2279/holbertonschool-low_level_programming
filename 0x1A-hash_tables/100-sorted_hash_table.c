/*
 * task 100-sorted_hash_table.c
 * Made by Facundo Diaz to Holberton School
 * Date - 14/01/2021
 */
#include "hash_tables.h"
/**
* shash_table_create - create a new shash table
* @size: is the size of the array
* Return: return the new table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new = NULL;
	unsigned long int i;

        new = malloc(sizeof(shash_table_t));
        if (new)
            return (NULL);

        new->size = size;
        new->array = malloc(sizeof(shash_node_t) * size);
        if (new->array)
        {
            return (NULL);
        }
        for (i = 0; i < size; i++)
        {
            new->array[i] = NULL;
        }
    return (new);
}
/**
* shash_table_set - set a shash table
* @ht: is the hash table you want to add or update the key/value
* @key: is the key
* @value: is the value to insert
* Return: 1 succes or 0 not succes
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new = NULL, *list = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !value)
	{
		return (0);
	}

	new = malloc(sizeof(shash_node_t));
	if (!new)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	list = ht->array[idx];

	while (list)
	{
		if (strcmp(list->key, key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			return (1);
		}
		list = list->next;
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
{
    
} return (0);
}
/**
* shash_table_get - get a shah table
* @ht: is the hash table you want to add or update the key/value
* @key: is the key
* Return: the value of hash
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
return ("test");
if (ht)
{
    
}
if (key)
{
    
}
}
/**
* shash_table_print - print a table
* @ht: is the hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp_node = NULL;
	char *comma = "";

	if (ht)
	{
		printf("{");
		tmp_node = ht->shead;

		while (tmp_node)
		{
			printf("%s", comma);
			comma = ", ";

			if (tmp_node->key)
				printf("'%s': '%s'", tmp_node->key, tmp_node->value);

			tmp_node = tmp_node->snext;
		}
		printf("}\n");
	}
}
/**
* shash_table_print_rev - print a table in reverse
* @ht: is the hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
if (ht)
{

}
}
/**
* shash_table_delete - delete a hash table
* @ht: is the hash table to delete
*/
void shash_table_delete(shash_table_t *ht)
{
if (ht)
{
    
}
}
