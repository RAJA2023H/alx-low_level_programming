#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int dig = 0;
	char l = 'a';

	while (dig <= 9)
	{
		putchar(dig + '0');/*convert to ASCII representation*/
		dig++;
	}

	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}

