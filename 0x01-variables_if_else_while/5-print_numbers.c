#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: digits base 10.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
		printf("%d", dig);
		dig++;
	}
	printf("\n");

	return (0);
}
