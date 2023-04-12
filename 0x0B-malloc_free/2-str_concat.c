#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int l1, l2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	l1 = l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	c = malloc(sizeof(char) * (l1 + l2 + 1));
	if (c == NULL)
		return (NULL);

	l1 = l2 = 0;
	while (s1[l1] != '\0')
	{
		c[l1] = s1[l1];
		l1++;
	}
	while (s2[l2] != '\0')
	{
		c[l1] = s2[l2];
		l1++;
		l2++;
	}
	c[l1] = '\0';
	return (c);
}

