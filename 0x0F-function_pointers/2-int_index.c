#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function searches for an integer
 * @array: pointer to array of int
 * @size: integer
 * @cmp: pointer to function
 *
 * Return: index of element or -1 when failed
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (!array || !cmp || size <= 0)
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
		x++;
	}
	return (-1);
}

