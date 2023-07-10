#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: Always 0.
 */

int get_endianness(void)
{
	int i = 1;

	if (*(char *)&i)
		return (1);
	return (0);
}
