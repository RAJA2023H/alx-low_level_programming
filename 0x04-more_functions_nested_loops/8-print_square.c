#include "main.h"

/**
 * print_square - prints a square
 * If size is 0 or less, it prints only a new line.
 * @size: size of the square.
*/

void print_square(int size)
{
	int H, W;

	if (size > 0)
	{
		for (H = 0; size > H; H++)
		{
			for (W = 0; size > W; W++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
