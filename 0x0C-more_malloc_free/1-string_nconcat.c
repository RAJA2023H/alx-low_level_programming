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
	int i, j, l1, l2;
	char *m;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (l1 = 0; s2[l1] != '\0'; l1++)
		;

	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	*m = malloc(n + l1 + 1)

	for (i = 0; s1[i] != '\0'; i++)
	{
		m[i] = s1[i];
	}

	for (j = 0 ; j < n ; j++)
	{
		mem[i] = s2[j];
		i++;
	}

	mem[i] = '\0';
	return (m);
}
