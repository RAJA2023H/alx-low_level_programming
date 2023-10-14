#include "lists"
/**
 * add_dnodeint -  adds a new node at the beginning
 * @head: head of double list
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_begining;

	if (new_begining == NULL)
                return (NULL);
        new_begining->n = n;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
		new_begining->next = *head;
		(*head)->prev = new_begining;
	}
	else
		new_begining->next = NULL;
	new_begining->prev = NULL;
	*head = new_begining;
	return (new_begining);
}
