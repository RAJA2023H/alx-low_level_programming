#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dig = 48;

	while (dig <= 57)
	{
		putchar(dig);
		if (dig != 57)
		{
			putchar(',');
			putcar(' ');
		}
		dig++;
	}
	putchar('\n');/*new line*/

	return (0);
}
