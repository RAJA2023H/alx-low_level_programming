#include "main.h"

/**
 * print_last_digit - print last of a number.
 *
 * @n: takes number input
 *
 * Return: lastdigit
*/

int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
		lastd = -1 * (n % 10);
	else
		lastd = n % 10;
	_putchar(lastd + '0');
	return (lastd);
}
