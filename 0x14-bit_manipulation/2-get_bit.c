#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: given index
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
