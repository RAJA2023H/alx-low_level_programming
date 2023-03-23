#include "main.h"
#include <stdio.h>

/**
 * natural - computes and prints the sum of all
 * the multiples of 3 or 5 below 1024.
 *
 * Return: Always sum (success)
*/

int natural(void)
{
	int num, sum;

	sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (sum);
}
