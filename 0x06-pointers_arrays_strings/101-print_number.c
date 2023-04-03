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
		_putchar('-');
		x = -n;
	}
	num = x;
	for (fac = 1; num > 9 ; fac *= 10)
	{
		num /= 10;
	}
	for (; fac >= 1; fac /= 10)
	{
		_putchar(((x / fac) % 10) + 48);
	}
}
