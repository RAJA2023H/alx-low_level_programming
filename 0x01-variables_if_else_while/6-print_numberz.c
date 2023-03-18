#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: use putchar to print digits base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
	putchar(dig + '0');
	dig++;
	}
	putchar('\n');

	return (0);
}
