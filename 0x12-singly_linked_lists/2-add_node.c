#include "lists.h"
/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: pointer to first node
 * @str: pointer to new data
 *
 * Return: pointer to node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i = 0;

	while (str[count])
		i++;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}

