#include "search_algos.h"

/**
 * binary_search_recursive - Searches for a value in an array of
 * integers using the Binary search algorithm recursively.
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the value, or -1 if not found
 */
int binary_search_recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (binary_search_recursive(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (binary_search_recursive(array, mid + 1, value));

	mid++;
	result = binary_search_recursive(array + mid, size - mid, value);
	return (result == -1 ? -1 : (int)(result + mid));
}

/**
 * advanced_binary_search - Calls binary_search_recursive to return
 * the index of the value.
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = binary_search_recursive(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
