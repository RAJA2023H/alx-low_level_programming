#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: input string.
 * Return: str.
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\n' || str[i - 1] == ','
			|| str[i - 1] == ';' || str[i - 1] == '.'
			|| str[i - 1] == '!' || str[i - 1] == '?'
			|| str[i - 1] == '"' || str[i - 1] == '('
			|| str[i - 1] == ')' || str[i - 1] == '{'
			|| str[i - 1] == '}' || i == 0)
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
