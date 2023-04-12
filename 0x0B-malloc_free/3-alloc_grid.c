#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocate 2 dimensional array of integers initialized to 0.
 * @width: integer.
 * @height: integer.
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || width < 0 || height == 0 || height < 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0 ; j < width ; j++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
		**grid = 0;
	return (grid);
}
