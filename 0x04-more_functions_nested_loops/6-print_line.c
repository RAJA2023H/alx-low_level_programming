#include "main.h"

/**
 * print_line -  draws a straight line in the terminal.
 * @n: input
*/

void print_line(int n)
{
	if (n > 0)
	{
		int count;

		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
