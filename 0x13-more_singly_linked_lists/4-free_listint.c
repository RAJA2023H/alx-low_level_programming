#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer to head
 * Return: void.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
}
