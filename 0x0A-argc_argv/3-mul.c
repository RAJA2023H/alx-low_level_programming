#include "stdio.h"
#include "stdlib.h"

/**
 * main - program that multiplies two numbers.
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
