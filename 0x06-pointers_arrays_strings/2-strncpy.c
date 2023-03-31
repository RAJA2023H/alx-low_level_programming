#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: destination string.
 * @src: input string.
 * @n: number of bytes.
 * Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (dest[j] != '\0')
	{
		if (j < n)
		{
			dest[j] = src[j];
		}
		j++;
	}
	while (j < n )
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
