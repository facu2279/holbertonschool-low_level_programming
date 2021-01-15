/*
 * task 2-key_index
 * Made by Facundo Diaz to Holberton School
 * Date - 14/01/2021
 */
#include "hash_tables.h"
/**
* key_index - gives you the index of a key
* @key: is the key
* @size: is the size of the array
* Return: Returns the index at which the key/value
* pair should be stored in the array of the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
