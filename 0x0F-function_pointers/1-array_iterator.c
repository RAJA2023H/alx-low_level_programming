#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function as a parameter
 *			on each element of an array.
 * @array: pointer to an array.
 * @size: structer.
 * @action: pointer to function.
 * Return: void.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t len;

	if (array && size && action)
	{
		for (len = 0; len < size; len++)
			action(array[len]);
	}
}
