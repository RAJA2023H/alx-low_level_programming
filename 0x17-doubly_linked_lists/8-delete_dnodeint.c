#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node to delete
 * Return: 1 if successful, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    
    if (!head || !*head)
        return (-1);

    if (index == 0)
    {
        *head = current->next;
        if (current->next)
            current->next->prev = NULL;
        free(current);
        return (1);
    }

    for (unsigned int i = 0; i < index; i++)
    {
        if (!current)
            return (-1);
        current = current->next;
    }

    if (!current)
        return (-1);

    current->prev->next = current->next;

    if (current->next)
        current->next->prev = current->prev;

    free(current);

    return (1);
}
