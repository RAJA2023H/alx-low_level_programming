#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to firt node of list_t
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head->next;
		free(head->str);
		free(head);
		head = current_node;
	}
}
