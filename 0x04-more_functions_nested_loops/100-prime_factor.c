#include <stdio.h>

/**
 * main - prints the largest prime factor of the num 612852475143.
 * Return: Always 0 (Success).
*/

int main(void)
{
	long int pf, num;

	num = 612852475143;
	for (pf = 2; pf <= num; pf++)
	{
		while (num % pf == 0)
		{
			num /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
