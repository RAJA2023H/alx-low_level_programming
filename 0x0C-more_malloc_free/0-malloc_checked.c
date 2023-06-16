#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: first bytes of the memory.
 * Return : pointer or 98 if fails.
 *
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
