#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings.
 *
 * @s1 : first strings.
 * @s2 : second strings.
 *
 * Return : return 0 on failure.
 *
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, i, j;
	char *p;

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

	p = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
