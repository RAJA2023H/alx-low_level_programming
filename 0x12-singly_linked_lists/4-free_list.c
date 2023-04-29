#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to firt node of list_t
 */
void free_list(list_t *head)
{
	list_t *current_n = head;
	list_t *next;

	while (current_n != NULL)
	{
		next = current_n->next;

		free(current_n->str);
		free(current_n);
		current_n = next;
	}
}
