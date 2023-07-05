#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a linked list.
 * @head: pointer to head
 * Return: sum of all the data of a linked list or NULL.
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;
	current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
