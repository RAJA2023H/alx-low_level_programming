#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: The size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *hash_table;

	if (!size)
	{
		return(NULL);
	}
	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		return(NULL);
	}
	hash_table->size = size;
	hash_table->array =  malloc(sizeof(hash_node_t *) * hash_table->size);
	if (!hash_table->array)
	{
		free(hash_table);
		return(NULL);
	}
	for (x = 0; x < size; x++)
	{
		hash_table->array[x] = NULL;
	}
	return(hash_table);
}
