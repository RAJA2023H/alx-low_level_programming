#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input array.
 * @n: length of array.
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i <= n)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		n--;
		i++;
	}
}
