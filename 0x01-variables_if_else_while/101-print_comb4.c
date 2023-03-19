#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dig1 = 0, dig2, dig3;

	while (dig1 <= 9)
	{
		dig2 = 0;
		while (dig2 <= 9)
		{
			dig3 = 0;
			while (dig3 <= 9)
			{
				if ((dig1 != dig2) && (dig2 != dig3) && (dig1 < dig2) && (dig2 < dig3))
				{
					putchar(dig1 + 48);
					putchar(dig2 + 48);
					putchar(dig3 + 48);
				if (dig1 != 7 || dig2 != 8 || dig3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				}
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');

	return (0);
}
