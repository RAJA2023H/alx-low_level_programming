#include "search_algos.h"

/**
	* linear_skip_search - searches for a value in a skip list
	*
	* @head: pointer to the head of the skip list
	* @target: value to search for
	* Return: pointer to the node containing the target value, or NULL
	*/
skiplist_t *linear_skip_search(skiplist_t *head, int target)
{
	skiplist_t *current, *express;

	if (!head)
		return (NULL);

	current = head;

	do {
		express = current->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)express->index, express->n);

		if (!express || express->n >= target)
			break;

		current = express;
	} while (1);

	if (!express)
	{
		express = current;
		while (express->next)
			express = express->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)current->index, (int)express->index);

	while (current && current != express->next)
	{
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)current->index, current->n);
		if (current->n == target)
			return (current);
		current = current->next;
	}
	return (NULL);
}
