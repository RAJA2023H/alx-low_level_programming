#include "main.h"

/**
 * _isalpha - cheks if c is a letter lowercase an uppercase
 *
 * @c: takes input from other function
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
