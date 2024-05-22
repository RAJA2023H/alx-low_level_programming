#include "search_algos.h"
#include <math.h>

/**
	* jump_list - Searches for a value in a singly linked list of
	* integers using the Jump search algorithm.
	*
	* @list: Pointer to the head of the list
	* @size: Size of the list
	* @value: Value to search for
	* Return: Pointer to the node containing the value, or NULL if not found
	*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, index;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	step = (size_t)sqrt((double)size);
	index = 0;

	do {
		prev = list;
		index += step;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index > list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", prev->index, list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
