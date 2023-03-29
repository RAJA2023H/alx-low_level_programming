#include "main.h"

/**
 * *_strcpy - copies the string.
 * @dest: destination.
 * @src: input string.
 * Return: returns dest.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
