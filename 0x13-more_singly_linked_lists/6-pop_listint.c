#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * @head: double pointer to head
 * Return: and returns the head node’s data
 *
 */


int pop_listint(listint_t **head)
{
	listint_t *current;
        int data;

	if (*head == NULL)
	{
		return(0);
	}

	data = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);
	return (data);
}

