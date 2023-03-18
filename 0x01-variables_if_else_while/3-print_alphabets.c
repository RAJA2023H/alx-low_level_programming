#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriptio: print alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char l = 'a';
	char L = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}
	puchar('\n');

	return (0);
}
