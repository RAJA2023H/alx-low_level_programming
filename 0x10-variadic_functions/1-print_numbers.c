#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: size of triangle
 * @n: size of triangle
 * Description: function that prints numbers,
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x = 0;

	va_start(args, n);
	for (x = 0; x < (int)n; x++)
	{
		printf("%d%s", va_arg(args, int),
			   x != (int)n - 1 && separator != NULL ? separator : "");
	}
	printf("\n");
}
