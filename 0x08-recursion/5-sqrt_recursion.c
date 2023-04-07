#include "main.h"

/**
 * _loop_sqrt_recursion - check for the square of n.
 * @n: numbrt to find the square root of.
 * @k: natural square root of n.
 * Return: square of n or -1.
 */

int _loop_sqrt_recursion(int n, int k)
{
	if ((k * k) == n)
	{
		return (k);
	}
	else if (k * k > n)
	{
		return (-1);
	}
	else
	{
		return (_loop_sqrt_recursion(n, k + 1));
	}
}
/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *  @n: numbrt to find the square root of.
 *  Return: natural square of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_loop_sqrt_recursion(n, 2));
	}
}
