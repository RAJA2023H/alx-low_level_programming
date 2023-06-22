#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: pointer to string.
 * @f: pointer to a function.
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
