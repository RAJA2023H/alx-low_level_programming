#include <stdio.h>
#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n : integer
 *
 * Return: factorial of an int or  -1 if it fails.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));

}
