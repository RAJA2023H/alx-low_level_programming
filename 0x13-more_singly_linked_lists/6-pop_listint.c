#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *			and returns the head node’s data
 * @head: double pointer to head
 * Return: returns the head node’s data
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data = (*head)->n;

	listint_t *current = *head;
	*head = (*head)->next;
	free(current);
	return (data);
}

