#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings -  prints strings,
 * @separator: size of triangle
 * @n: size of triangle
 * Description: function that prints strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x = 0;
	char *s;

	va_start(args, n);
	for (x = 0; x < (int)n; x++)
	{
		s = va_arg(args, char *);
		printf("%s%s",
			   s == NULL ? "(nil)" : s,
			   x != (int)n - 1 && separator != NULL ? separator : "");
	}
	va_end(args);
	printf("\n");
}
