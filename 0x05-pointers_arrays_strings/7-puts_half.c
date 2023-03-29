#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input char.
*/

void puts_half(char *str)
{
	int l = 0;
	int n;

	while (str[l] != '\0')
	{
		l += 1;
	}
	if ((l % 2) == 0)
	{
		for (n = ((l - 1) / 2); n < l; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	else
	{
		for (n = ((l - 1) / 2); n < l; n++)
		{
			_putchar(str[n + 1]);
		}
	}
}
