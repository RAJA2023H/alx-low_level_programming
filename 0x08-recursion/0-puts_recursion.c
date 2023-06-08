#include <unistd.h>
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string
 * @s : string
 * Return : 1 or 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
