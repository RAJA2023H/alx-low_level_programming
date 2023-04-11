#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of allocated memory.
 * @c: character.
 * Return: pointer to the array, or NULL if it fails (size = 0)
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(*p) * size);

	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	p[i] = c;
	}
	return (p);
}
