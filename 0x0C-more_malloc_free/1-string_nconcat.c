#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: input string
 * @s2: input string
 * @n:  input integer
 *
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *m;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	l1 = 0;
	while (s2[l1])
		l1++;

	l2 = 0;
	while (s2[l2])
		l2++;

	m = malloc(n + l1 + 1);
	for (i = 0; i < l1 && s1[i] != '\0'; i++)
	{
		m[i] = s1[i];
	}
	for (j = 0 ; j < n && s2[j] != '\0'; j++)
	{
		m[i] = s2[j];
		i++;
	}

	m[i] = '\0';
	return (m);
}
