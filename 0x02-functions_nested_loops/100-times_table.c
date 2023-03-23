#include "main.h"

/**
 * print_times_table - prints the n times table.
 *
 * If 0 > n > 15 the function should not print anything.
 *
 * @n: takes number input.
*/

void print_times_table(int n)
{
	int x, y, p;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				p = x * y;

				if (p <= 99)
				{
					if (p <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(p + 48);
					}
					else
					{
						_putchar(' ');
						_putchar((p / 10) + 48);
						_putchar((p % 10) + 48);
					}
				}
				else
				{
					_putchar((p / 100) + 48);
					_putchar(((p / 10) % 10) + 48);
					_putchar((p % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
