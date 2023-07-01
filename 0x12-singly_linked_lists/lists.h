#ifndef LISTS_H
#define LISTS_H

/**Structure definition for a linked list node.**/
typedef struct list_node {
	char *str;
	unsigned int len;
	struct list_node *next;
}list_t;

/**Function prototypes.**/
size_t print_list(const list_t *h);

#endif
