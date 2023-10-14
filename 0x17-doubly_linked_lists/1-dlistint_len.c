#include "lists.h"

/**
 * dlistint_len -   returns the number of elements
 * @h: head of double list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
