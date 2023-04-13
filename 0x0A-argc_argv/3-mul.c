#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers of arguments.
 * @argc: counter of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, m = 1;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			m *= atoi(argv[i]);
		}
		printf("%d\n", m);
	}
	return (0);
}
