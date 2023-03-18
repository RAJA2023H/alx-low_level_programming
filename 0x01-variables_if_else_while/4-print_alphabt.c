#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet except e and q
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
			l++;
		putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
