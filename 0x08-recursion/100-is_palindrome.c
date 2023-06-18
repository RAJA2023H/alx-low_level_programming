#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int is_palindrome(char *s);
int s_len(char *s);
int check_if_pal(char *s, int i, int L);

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to chack.
 * Return:  returns 1 if a string is a palindrome and 0 if not.
 *
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check_if_pal(s, 0, s_len(s)));
}
/**
 * s_len - calculets the linght of a string.
 * @s: string to check.
 * Return: returns the lenght of the string if successed.
 */

int s_len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + s_len(s + 1));
}
/**
 * check_if_pal - checks the string recursively.
 * @s: string to check
 * @i: iteration number.
 * @L: lenght of the string.
 * Return: 1 if palindrome , 0 if not.
 *
 */

int check_if_pal(char *s, int i, int L)
{
	if (*(s + i) != *(s + L - 1))
		return (0);

	if (i >= L)
		return (1);

	return (check_if_pal(s, i + 1, L - 1));
}
