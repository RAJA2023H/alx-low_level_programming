#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of array
 * @c: char to assign
 * Description: creates an array of chars.
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	else
	{
		while (size--)
		{
			p[size] = c;
		}
	return (p);
	}
}
