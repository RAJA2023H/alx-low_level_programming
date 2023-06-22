#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: unsigned integer
 * Return: returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int R;
	unsigned int i;
	
	if (n == 0)
                return (0);
	
	va_start(args, n);

	R = 0;
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		R += num;
	}
	va_end(args);
	return (R);
}
