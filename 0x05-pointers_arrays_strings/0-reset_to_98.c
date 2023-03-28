#include "main.h"

/**
 * reset_to_98 - takes a pointer to n as parameter
 * and updates the value it points to to 98.
 *
 * @n: input pointer to integer n.
*/

void reset_to_98(int *n)
{
	int *ip = &*n;

	*ip = 98;
}
