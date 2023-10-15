#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node
 * @h: head of double list
 * @idx: index where to insert
 * @n: value to insert
 * Return: address of the new node or NULL
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (!*h)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	while (current)
	{
		if (count == idx)
		{
			new->prev = current->prev;
			new->next = current;
			if (current->prev)
				current->prev->next = new;
			else
				*h = new;
			current->prev = new;
			return (new);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
