#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to head.
 * @index: integer,
 * Return:returns the nth node or null.
 *
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current;

	current = head;
	while (current != NULL && counter <= index)
	{
		if (counter == index)
			return (current);

		counter++;
		current = current->next;
	}
	return (NULL);
}

