#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: input integer
 * @max: input integer
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int x, size;
	int *m;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	m = malloc(sizeof(int) * size);
	if (!m)
		return (NULL);
	for (x = 0 ; x < size ; x++)
		*(m + x) = min + x;
	return (m);
	free(m);
}

