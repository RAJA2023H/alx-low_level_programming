#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value):
{
	hash_node_t *new_node, *current;
	unsigned long int i = 0;

	if (!key || !ht || key[0] == '\0'):
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	current= ht->array[i]
	while(current)
	{
		if (strcmp(key, current->key) == 0):
		{
			strcpy(current->value, value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);

}
