#include "main.h"

/**
 * print_diagonal -  draws a diagonal.
 * @n: input
*/

void print_diagonal(int n)
{
	int count, s;

	if (n > 0)
	{
		for (count = 0; count <= n; count++)
		{
			for (s = 1; s <= count; s++)
			{
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
