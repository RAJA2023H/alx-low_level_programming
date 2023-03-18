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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
	printf("The last digit of %d is %d");
	printf("and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
	printf("The last digit of %d is %d");
	printf("and is 0\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
	printf("The last digit of %d is %d");
	printf("and is less than 6\n", n, last_digit);
	}
	return (0);
}
