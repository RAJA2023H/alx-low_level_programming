#include "oper.h"
/**
 * div - division of two integers.
 *
 * @a: first input
 * @b: second input
 *
 * Return: divizion of a by b
*/

int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
