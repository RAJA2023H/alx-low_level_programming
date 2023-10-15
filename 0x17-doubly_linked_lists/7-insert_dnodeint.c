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
	dlistint_t *new = 0, *previous,  *current = *h;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current)
	{
		if (count == idx - 1)
			previous = current;

		if (count == idx)
		{
			new->next = current;
			current->prev = new;
			previous->next = new;
			new->prev = previous;
			return (new);
		}
		if (!current->next && count + 1 == idx)
			return (add_dnodeint_end(h, n));
		current = current->next;
		count++;
	}
	return (NULL);
}
