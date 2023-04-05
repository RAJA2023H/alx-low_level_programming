#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (len = 0; accept[len]; len++)
		{
			if (s[i] == accept[len])
			{
				len++;
				break;
			}
		}
	}
	len += 1;
	return (len);
}
