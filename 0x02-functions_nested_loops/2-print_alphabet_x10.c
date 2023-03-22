#include "main.h"

/**
 * print_10times - fuction that will prints alphabet x10
*/

void print_alphabet_x10(void)
{
	int L, c;

	for (L = 0; L <= 9; L++)
	{
		for (c = 'a'; c <= 'z')
			_putchar(c);
		-putchar('\n');
	}
}
