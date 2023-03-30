#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: input sring.
 * Return: returns dest.
*/

char *_strcat(char *dest, char *src)
{
	int j, i, l;

	l = 0;
	j = 0;
	i = 0;

	while (src[j] != '\0')
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
				dest[l + i] = '\0';
			}
			i++;
		}
		j++;
	}
	return (dest);
}
