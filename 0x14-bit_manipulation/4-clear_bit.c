#include "main.h"

/**
 * clear_bit - set bit's value to 0
 *
 * @n: pointer of number
 * @index: bit index to set on
 *
 * Return: 1 on success || -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int ibit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	ibit = (*n & (1 << index)) ? 1 : 0;
	if (ibit == 1)
	{
		*n = *n ^ (1 << index);
	}
	return (1);
}
