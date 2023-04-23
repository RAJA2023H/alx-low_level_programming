#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that  prints anything
 * @format: list of types
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *s, *sp = "";

	va_list list;

	va_start(list, format);

	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", sp, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sp, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sp, va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", sp, s);
				break;
			default:
				x++;
				continue;
		}
		sp = ", ";
		x++;
	}
	printf("\n");
	va_end(list);
}
