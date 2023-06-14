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
	unsigned int size = 0, i;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
    		size++;

	p = (char *)malloc((size + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];

  	p[i] = '\0';

	return (p);
}
