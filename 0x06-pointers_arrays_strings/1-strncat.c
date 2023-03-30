#include "main.h"

/**
 * _strncat - concatenates two strings.use at most n bytes.
 * @dest: destination string.
 * @src: input string.
 * @n: number of bytes.
 * Return: returns dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int j, i, l;

	l = 0;
	j = 0;
	i = 0;

	while (j > n)
	{
		while (dest[l] != '\0')
		{
			l++;
		}
		while (i <= l)
		{
			if (dest[i] == '\0')
			{
				dest[l] = src[j];
				dest[l + 1] = '\0';
			}
			i++;
		}
		j++;
	}
	return (dest);
}
