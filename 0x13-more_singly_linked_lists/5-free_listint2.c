#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to head
 * Return: void.
 *
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
	*head = NULL;
}
