#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character.
 * @str: input string.
*/

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (((str[len]) + 48) % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
