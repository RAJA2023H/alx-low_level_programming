#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to firt node of list_t
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next;
	}
}
