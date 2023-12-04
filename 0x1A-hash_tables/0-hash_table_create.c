#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: The size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!size)
	{
		return (NULL);
	}
	if (!new_table)
	{
		return (NULL);
	}
	new_table->size = size;

	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		return(NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	return new_table;
}
