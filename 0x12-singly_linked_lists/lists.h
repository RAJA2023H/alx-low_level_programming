#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <sdtlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string
 * @lenght: lenght of the string
 * @next: point to the next node
 *
 * Description: structure of singly linked list node
 */
typedef struct list_s
{
	char *s;
	unsigned int lenght;
	struct list_s *next;
} list_;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
