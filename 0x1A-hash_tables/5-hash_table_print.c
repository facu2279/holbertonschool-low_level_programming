/*
 * task 5-hash_table_print.c
 * Made by Facundo Diaz to Holberton School
 * Date - 14/01/2021
 */
#include "hash_tables.h"
/**
* hash_table_print - prints a hash table
* @ht: is the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node = NULL;
	unsigned long int index = 0;
	char *comma = "";

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			tmp_node = ht->array[index];

			while (tmp_node)
			{
				printf("%s", comma);
				comma = ", ";

				if (tmp_node->key)
					printf("'%s': '%s'", tmp_node->key, tmp_node->value);

				tmp_node = tmp_node->next;
			}
			index++;
		}
		printf("}\n");
	}
}
