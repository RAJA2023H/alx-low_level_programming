#include "main.h"
/**
 * set_bit - set a bit's value to 1
 *
 * @n: pointer to number
 * @index: index that start from 0
 *
 * Return: 1 on success || -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ibit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	ibit = (*n & (1 << index)) ? 1 : 0;
	if (ibit == 0)
	{
		*n = *n ^ (1 << index);
	}
	return (1);
}
