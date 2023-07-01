#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list.
 * @h: pointer to head of a linked list
 * Return: returns the number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
