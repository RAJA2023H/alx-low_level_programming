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
	int l = 48;

	while (l < 57)
	{
		putchar(l);
		putchar(',');/*numbers from 0 to 9 separated by , */
		l++;
	}
	putchar(l);/*prints 9*/
	putchar('\n');/*new line*/

	return (0);
}
