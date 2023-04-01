#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: input string.
 * Return: s.
*/

char *leet(char *s)
{
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	int num [] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
