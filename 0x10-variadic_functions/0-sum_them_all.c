#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: size of triangle
 * Description: returns the sum of all its parameters.
 * Return: returns the sum of all its parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, x = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	while (x < (int)n)
	{
		sum += va_arg(args, int);
		x++;
	}
	va_end(args);

	return (sum);
}