#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string.
 * Return: NULL if str = NULL, or  a pointer to a newly allocated space.
*/

char *_strdup(char *str)
{
	int x, len;
	char *p;

	for (len = 0; str[len] != '\0'; len++)
	{
		p = malloc(1 + sizeof(*str) * len);
	}
	if (p == 0)
	{
	return (0);
	}
	else
	{
		for (x = 0; x < len; x++)
		{
			p[x] = str[x];
		}
	}
	return (p);
}
