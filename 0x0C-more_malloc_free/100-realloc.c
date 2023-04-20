#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block.
 * @ptr: pointer to the memory
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1, *old;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	p1 = malloc(new_size);
	if (!p1)
		return (NULL);
	old = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			p1[x] = old[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			p1[x] = old[x];
	}
	free(ptr);
	return (p1);
}
