#include "main.h"

/**
 * *_strcpy - copies the string.
 * @dest: destination.
 * @src: input string.
 * Return: returns dest.
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	while (src[len] != '\0')
	{
		len += 1;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
