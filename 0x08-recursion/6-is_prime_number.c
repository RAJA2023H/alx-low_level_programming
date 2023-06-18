#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_prime_number - check whether a given number n is a prime number.
 * @n: input number.
 * Return: returns 1 if n is a prime number, otherwise return 0.
 *
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
	return (0);
	}
	return (is_prime(n, 2));
}
/**
 * is_prime - check whether a given number n is a prime number.
 * @n: input number.
 * @x: iteration number.
 * Return: returns 1 if n is a prime number, otherwise return 0.
 *
 */
int is_prime(int n, int x)
{
	if (x > (n / 2))
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (is_prime(n, x + 1));
}
