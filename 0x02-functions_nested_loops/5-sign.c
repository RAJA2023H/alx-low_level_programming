#include "main.h"

/**
 * print_sign - ptints + signe of n is greater than 0, 0 or - if less
 *
 * @n: takes integer type input
 *
 * Return: 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
}
