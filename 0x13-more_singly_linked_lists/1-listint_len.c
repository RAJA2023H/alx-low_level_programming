#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head
 * Return: returns the number of elements in a linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
