#include "lists.h"

/**
 * print_list - print all elements of list_t
 * @h: head node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	for (;h != NULL; i++)
	{
		if (head->s == NULL)
			printf("[0] (nil)\n"
		else
			printf("[%d] %s\n", h->lenght, h->s);
		h = h->next;
	}
	return (i);
}
