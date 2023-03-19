#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dig1 = 0, dig2;

	while (dig1 <= 9)
	{
		dig2 = 0;
		while (dig2 <= 9)
		{
			if (dig1 != dig2 && dig1 < dig2)
			{
				putchar(dig1 + 48);
				putchar(dig2 + 48);
				if (dig1 != 9 && dig2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');

	return (0);
}



