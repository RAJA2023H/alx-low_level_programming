#include <stdio.h>
#include <stdlib.h>
int _sqrt_helper(int n, int x);
/**
 * _sqrt_recursion - calculate the square root using recursion
 * @n: input number
 *
 * Return: the resulting square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
/**
 * _sqrt_helper - finds the natural square root of n.
 * @n: input number
 * @x: iterator number
 * Return: square root of n.
 */
int _sqrt_helper(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt_helper(n, x + 1));
}
