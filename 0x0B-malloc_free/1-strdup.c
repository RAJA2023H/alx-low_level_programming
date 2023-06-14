#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to the duplicated string
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	unsigned int size = 0, i = 0;
	char *p;

	while (str[size] != '\0')
		size++;

	p = (char *)malloc((size + 1) * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (NULL);
	}

	if (p == NULL)
		return (NULL);

	while (i < (size + 1))
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}

