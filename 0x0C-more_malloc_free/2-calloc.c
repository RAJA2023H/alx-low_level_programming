#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _calloc - function that allocates memory for an array,
* @nmemb: number of elements of array
* @size: size of element of array
* Return: pointer to the allocated memory or NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *S;
	unsigned int n;

	if (size == 0 || nmemb == 0)
		return (NULL);

	S = malloc(size * nmemb);

	if (S == 0)
		return (NULL);

	for (n = 0; n < nmemb * size; n++)
		S[n] = 0;

	return ((void *)S);
}
