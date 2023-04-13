#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address.
 * @b: value
 * @n: number of bytes.
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}

