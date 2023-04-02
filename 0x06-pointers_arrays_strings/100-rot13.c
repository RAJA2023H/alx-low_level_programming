#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: input string.
 * Return: returns the sring after ebcoding it.
 */

char *rot13(char *s)
{
	int i, x;
	char alpha[52][2] = {{'a', 'n'}, {'b', 'o'}, {'c', 'p'},
		{'d', 'q'}, {'e', 'r'}, {'f', 's'}, {'g', 't'},
		{'h', 'u'}, {'i', 'v'}, {'j', 'w'}, {'k', 'x'},
		{'l', 'y'}, {'m', 'z'}, {'n', 'a'}, {'o', 'b'},
		{'p', 'c'}, {'q', 'd'}, {'r', 'e'}, {'s', 'f'},
		{'t', 'g'}, {'u', 'h'}, {'v', 'i'}, {'w', 'j'},
		{'x', 'k'}, {'y', 'l'}, {'z', 'm'}, {'A', 'N'},
		{'B', 'O'}, {'C', 'P'}, {'D', 'Q'}, {'E', 'R'},
		{'F', 'S'}, {'G', 'T'}, {'H', 'U'}, {'I', 'V'},
		{'J', 'W'}, {'K', 'X'}, {'L', 'Y'}, {'M', 'Z'},
		{'N', 'A'}, {'O', 'B'}, {'P', 'C'}, {'Q', 'D'},
		{'R', 'E'}, {'S', 'F'}, {'T', 'G'}, {'U', 'H'},
		{'V', 'I'}, {'W', 'J'}, {'X', 'K'}, {'Y', 'L'}, {'Z', 'M'}};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (s[i] == alpha[x][0])
			{
			s[i] = alpha[x][1];

			break;
			}
		}
	}
	return (s);
}
