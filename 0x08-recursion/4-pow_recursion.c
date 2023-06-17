#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  _pow_recursion - returns the value of x raised to the power of y.
 * @x: integeer of x raised..
 * @y: integer.
 * Return: returns power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}/*If y is lower than 0, the function should return -1*/
 	if (y == 0)
 	{
 		return (1);
 	}
 
	return (x * _pow_recursion(x, y - 1));
	/*returns the value of x raised to the power of y*/
}
