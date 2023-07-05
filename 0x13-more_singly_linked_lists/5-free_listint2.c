#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to head
 * Return: void.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*head = NULL;
	}
}
