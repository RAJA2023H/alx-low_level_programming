#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: input first integer.
 * @b: input second integer.
*/

void swap_int (int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
