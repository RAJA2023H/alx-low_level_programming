#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len += 1;
	}
	while ((len - 1) >= 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
