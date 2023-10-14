#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of double list
 * @n: new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ending;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (NULL);
	new_ending = malloc(sizeof(dlistint_t));
	if (new_ending == NULL)
		return (NULL);
	new_ending->n = n;
	new_ending->next = NULL;
	if (*head == NULL)
	{
		new_ending->prev = NULL;
		*head = new_ending;
	}
	else
	{
		while (current->next && current)
		{
			current = current->next;
		}
		current->next = new_ending;
		new_ending->prev = current;
	}
	return (new_ending);
}
