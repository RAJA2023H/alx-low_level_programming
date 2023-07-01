#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		c++;
	}
	return (c);
}
