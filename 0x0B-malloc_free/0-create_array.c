#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (NULL);
	}
	else
	{
		while (size--)
 		{
			p[size] = c;
		}
	return (p);
	}
}
