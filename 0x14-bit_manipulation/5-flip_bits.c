#include "main.h"
/**
 * flip_bits - return bits number to flip from n and m
 *
 * @n: unsigned int to flip
 * @m: unsigned int to flip too
 *
 * Return: flipped unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int difference = n ^ m;

	while (difference)
	{
		count += difference & 1;
		difference >>= 1;
	}
	return (count);
}
