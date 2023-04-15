#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: memory area
 * @b: constant byte
 * @n: bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; i < n; x++)
		s[x] = b;
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: integer
 * @size: integer
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (!nmemb || !size)
		return (NULL);
	m = malloc(size * nmemb);
	if (!m)
		return (NULL);
	_memset(m, 0, size * nmemb);
	return (m);
	free(m);
}
