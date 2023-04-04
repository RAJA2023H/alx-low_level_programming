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
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
