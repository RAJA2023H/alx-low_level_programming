#include "main.h"
/**
 * get_bit - return bit's value
 *
 * @n: pointer number
 * @index: index that start from 0
 *
 * Return: 1 on success || -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ibit;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	ibit = (n & (1 << index)) ? 1 : 0;
	return (ibit);
}
