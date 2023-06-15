#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *		of integers
 * @width : integer
 * @height: integer
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int w = 0, h = 0, i = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);
	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (w = 0; w < height ; w++)
	{
		p[w] = malloc(sizeof(int) * width);
		if (!p[w])
		{
			for (i = 0 ; i < w ; i++)
				free(p[i]);
	
			free(p);
			return (NULL);
		}
		for (h = 0 ; h < width ; h++)
			p[w][h] = 0;
	}
	return (p);
}
