#include "main.h"

/**
 * check_is_prime_number - is a prime number.
 * @n: the number to check.
 * @k: i is a loop variable.
 * Return:  that returns 1 or 0 .
 */

int check_is_prime_number(int n, int k)
{
	if (n < 2)
	{
	return (0);
	}
	if (n == 2)
	{
	return (1);
	}
	if (k * k <= n)
	{
		if (n % k == 0)
		{
		return (0);
		}
		else
		{
		return (1);
		}
	}
	return (check_is_prime_number(n, k++));
}

/**
 * is_prime_number - is a prime number.
 * @n: the number to check.
 * Return: 0 or 1 .
 */

int is_prime_number(int n)
{
	return (check_is_prime_number(n, 2));
}

