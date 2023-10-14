#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a list
 * @h: head of double list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	if (current == NULL)
		return (i);
	while (current->prev != NULL)
		current = current->prev;
	while (current)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
