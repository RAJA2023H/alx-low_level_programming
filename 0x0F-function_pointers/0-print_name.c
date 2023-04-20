#include <stdio.h>

/**
 * print_name - function that prints a name.
 * @name: size.
 * @f: size.
 * Description: function that prints a name.
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

