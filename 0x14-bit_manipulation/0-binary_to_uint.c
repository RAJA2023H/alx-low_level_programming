#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b :  pointing to a string of 0 and 1 chars
 * Return: the converted number.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int power;
	unsigned int result;
	int i;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	result = 0;
	power = 1;
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
