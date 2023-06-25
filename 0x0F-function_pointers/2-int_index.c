#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - check if a number is greater than 0
 * @array: points to  array of int
 * @size: number of elements in array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: returns the index of the first element
 *		for which the cmp function
 *		does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int len;

	if ((size <= 0) || (!cmp))
	{
		return (-1);
	}

	for (len = 0; len < size; len++)
	{
		if (cmp(array[len]))
		{
			return (len);
		}
	}
	return (-1);
}
