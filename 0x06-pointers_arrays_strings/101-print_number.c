#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input number.
*/

void print_number(int n)
{
	unsigned int x = n;
	int fac, num;

	if (n < 0)
	{
		x = -n;
	}
	num = x;
	for (fac = 1; fac > 9 ; fac++)
	{
		num /= 10;
		fac *= 10;
	}
	for (; fact >= 1; fac /= 10)
	{
		_putchar(((x / fac) % 10) + 48);
	}
}
