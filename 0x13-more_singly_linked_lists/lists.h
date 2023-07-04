#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
