/*
 * task 6-hash_table_delete.c
 * Made by Facundo Diaz to Holberton School
 * Date - 14/01/2021
 */
#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table.
* @ht: is the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *aux;
    hash_node_t *aux2;
    unsigned long int i;
    
    for (i = 0; i < ht->size; i++)
    {
        aux = ht->array[i];
        while (aux != NULL)
        {   
            aux2 = aux->next;
            free(aux->value);
            free(aux->key);
            free(aux);
            aux = aux2;
        }
    }
    free(ht->array);
    free(ht);
}
