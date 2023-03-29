#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
*/

void rev_string(char *s)
{
	int len = 0;
	int temp, i;

	while (s[len] != '\0')
	{
		len += 1;
	}
	for (i = 0; i < (len - 1); i++)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = temp;
		len -= 1;
	}
}
