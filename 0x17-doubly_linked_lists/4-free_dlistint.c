#include "lists.h"
/**
 *
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	 dlistint_t *current = head, *next_node;

	if (head)
	{
		while (current)
		{
			next_node = current->next;
			free (current);
			current = next_node;
		}
	}

}
