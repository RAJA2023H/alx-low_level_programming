#include "main.h"

/**
 * print_alphabet_x10 - fuction that will prints alphabet x10
*/

void print_alphabet_x10(void)
{
	int L, c;

	for (L = 0; L <= 9; L++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
