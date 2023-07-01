#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to first node
 * @str: pointer to data to add
 *
 * Return: pointer to the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int c = 0;
	list_t *new_node = malloc(sizeof(list_t)),
	       *final_node;

	while (str[c])
		c++;
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = c;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		final_node = *head;
		while (final_node->next != NULL)
			final_node = final_node->next;
		final_node->next = new_node;
	}
	return (new_node);
}
