#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int l = 0, i, number = 0;

	if (!b)
		return (0);

	while (b[l] != '\0')
	{
		if (b[l] != '1' && b[l] != '0')
		{
			return (0);
		}
	l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			number += (1 << (l - 1 - i));
		}
	}
	return (number);
}
