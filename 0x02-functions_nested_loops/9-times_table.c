#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int y;

		for (y = 0; y <= 9; y++)
		{
			int p = (x * y);

			if (p > 9)
			{
				_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(p + 48);
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
}
