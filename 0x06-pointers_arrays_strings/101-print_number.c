#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input number.
*/

void print_number(int n)
{
	unsigned int x;
	int fac, num;

	if (n < 0)
	{
		_putchar('-');
		x = n * -1;
	}
	else
	{
		x = n;
	}

	num = x;
	fac = 1;
	while (num > 9)
	{
		num /= 10;
		fac *= 10;
	}
	for (; fac >= 1; fac /= 10)
	{
		_putchar(((x / fac) % 10) + 48);
	}
}
