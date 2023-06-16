#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	unsigned int l1, l2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;
	if (n > l2)
		n = l2;
	s = malloc(sizeof(char) * (n + l1) + 1);
	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
