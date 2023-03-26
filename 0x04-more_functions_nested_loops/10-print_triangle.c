#include "main.h"

/**
 * print_triangle - prints a triangle,
 * If size is 0 or less, print only a new line.
 * @size: input size of the triangle.
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		int h, s, z;

		for (h = 0; h < size; h++)
		{
			for (s = h; s < size; s++)
			{
				_putchar(' ');
			}
			for (z = h; z > 0; z--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}

	}
}
