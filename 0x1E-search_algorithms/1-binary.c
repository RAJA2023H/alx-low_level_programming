#include "search_algos.h"
/**
 * binary_search - function
 * @array: pointer to the first elemen
 * @size: number of elements in array
 * @value: value to search for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;

	if (!array)
		return (-1);

	while (left <= right)
	{
		middle = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}
