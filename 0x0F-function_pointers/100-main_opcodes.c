#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the opcodes of its own main function
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Return: 0 when success
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the opcodes of its own main function
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int i;
	char *list;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(1);
	}

	list = (char *)main;

	for (i = 0 ; i < atoi(argv[1]) ; i++)
	{
		if (i == atoi(argv[1]) - 1)
		{
			printf("%.2hhx\n", list[i]);
			return (0);
		}
		printf("%02hhx", list[i]);
	}

	return (0);
}
