#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * Return: 1 if c is uppercase, 0 otherwise.
 * @c: input character.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

