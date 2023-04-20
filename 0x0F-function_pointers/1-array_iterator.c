#include <stdio.h>

/**
 * array_iterator - function that executes a parameter
 * @array: size of triangle
 * @size: size of triangle
 * @action: size of triangle
 * Description: function that executes a function 
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x = 0;

	if (array == NULL || action == NULL)
		return;
	while (x < (int)size)
	{
		action(array[x]);
		x++;
	}
}
