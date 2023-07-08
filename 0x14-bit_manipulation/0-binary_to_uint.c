#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b :  pointing to a string of 0 and 1 chars
 * Return: the converted number.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len = strlen(b);
	unsigned int power = 1;
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
		}
		else if (b[i] == '1')
		{
			result += power;
		}
		else
		{
			return (0);
		}
		power *= 2;
	}

	return (result);
}
