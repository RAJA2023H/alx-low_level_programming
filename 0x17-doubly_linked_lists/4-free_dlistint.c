#include "lists.h"

/**
 * free_dlistint -  frees a doubly_linked list
 * @head: head of the list
 * Return: void
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
			free(current);
			current = next_node;
		}
	}

}
