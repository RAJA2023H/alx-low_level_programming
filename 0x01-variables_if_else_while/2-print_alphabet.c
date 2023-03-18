#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	return (0);
}
