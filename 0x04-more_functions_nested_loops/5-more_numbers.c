#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
*/

void more_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
