#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: first and minimum of the array to be created
* @max: last and maximum value of the array to be created
* Return: pointer to the created array or NULL
*/

int *array_range(int min, int max)
{
	int *s;
	int i;

	if (min > max)
		return (NULL);/*If min > max, return NULL*/

	s = malloc(sizeof(int) * ((max - min) + 1));
	if (s == NULL)
		return (NULL);/*If malloc fails, return NULL*/

	i = 0;
	while (i < ((max - min) + 1))
	{
		s[i] = min + i;
	}
	return (s);
}
