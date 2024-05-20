#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev, index;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt((double)size);
	prev = index = 0;

	/* Finding the block where the element is present*/
	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		prev = index;
		index += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	/* Performing linear search in the found block*/
	for (; prev < (int)size && prev <= index; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
