#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 * @head: head of double list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0, data = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current)
	{
		data = current->n;
		sum += data;
		current = current->next;
	}
	return (sum);

}
