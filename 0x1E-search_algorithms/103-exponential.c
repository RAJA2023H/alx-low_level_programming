#include "search_algos.h"

/**
 * recursive_search - Helper function to search for a value in an array of
 * integers using the Binary search algorithm.
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the value, or -1 if not found
 */
int recursive_search(int *array, size_t size, int value)
{
    size_t half = size / 2;
    size_t i;
    int result;

    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array");

    for (i = 0; i < size; i++)
        printf("%s %d", (i == 0) ? ":" : ",", array[i]);

    printf("\n");

    if (half && size % 2 == 0)
        half--;

    if (value == array[half])
        return ((int)half);

    if (value < array[half])
        return (recursive_search(array, half, value));

    half++;
    result = recursive_search(array + half, size - half, value);
    return (result == -1 ? -1 : (int)(result + half));
}

/**
 * binary_search - Calls recursive_search to return the index of the number.
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the number, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    int index = recursive_search(array, size, value);

    if (index >= 0 && array[index] != value)
        return (-1);

    return (index);
}

/**
 * exponential_search - Searches for a value in an array of
 * integers using the Exponential search algorithm.
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the number, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t index = 1, next;
    int result;

    if (array == NULL)
        return (-1);

    if (array[0] == value)
        return (0);

    while (index < size && array[index] < value)
    {
        printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
        index *= 2;
    }

    next = (index >= size) ? (size - 1) : index;

    index /= 2;

    printf("Value found between indexes [%d] and [%d]\n", (int)index, (int)next);

    result = binary_search(array + index, (next + 1) - index, value);

    if (result >= 0)
        result += index;

    return (result);
}
