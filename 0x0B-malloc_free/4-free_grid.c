#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the grid
 * @grid: grid of allocated memories
 * @height: intteger
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
