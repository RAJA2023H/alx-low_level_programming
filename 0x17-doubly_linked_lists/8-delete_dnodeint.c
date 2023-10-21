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
    unsigned int i = 0;
    
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

    while (current)
    {
        if (i == index)
        {
            if (current->next)
                current->next->prev = current->prev;
            current->prev->next = current->next;
            free(current);
            return (1);
        }
        current = current->next;
        i++;
    }

    return (-1);
}
