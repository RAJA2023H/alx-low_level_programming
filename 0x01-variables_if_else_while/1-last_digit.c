#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptio: print the last digit of a random number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, Ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ldigit = n % 10;

	if (Ldigit > 5)
	{
	printf("Last digit of %d is %d", n, Ldigit);
	printf(" and is greater than 5\n");
	}
	else if (Ldigit == 0)
	{
	printf("Last digit of %d is %d", n, Ldigit);
	printf(" and is 0\n");
	}
	else if (Ldigit < 6 && Ldigit != 0)
	{
	printf("Last digit of %d is %d", n, Ldigit);
	printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
