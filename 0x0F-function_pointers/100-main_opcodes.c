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
	int count;
	char *roll;

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

	roll = (char *)main;

	for (count = 0 ; count < atoi(argv[1]) ; count++)
	{
		if (count == atoi(argv[1]) - 1)
		{
			printf("%.2hhx\n", roll[count]);
			return (0);
		}
		printf("%02hhx", roll[count]);
	}

	return (0);
}

