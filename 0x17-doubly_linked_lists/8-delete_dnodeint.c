#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *before, *node;
	unsigned int count = 0;

	if(!head || !*head)
		return(-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while(current)
	{
		if (count == index)
			node == current;

		if (count == index - 1)
		{
			before = current;
		}
		if (count == index + 1)
		{
			before->next = current;
			current->prev = before;
			free(node);
			return (1);
		}
		if (current->next == NULL && count == index)
		{
			before->next = NULL;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);

}
