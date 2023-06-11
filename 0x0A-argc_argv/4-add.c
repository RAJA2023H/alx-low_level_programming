#include "stdio.h"
#include "stdlib.h"

/**
 * main - Write a program that adds positive numbers
 * @argc: counter of arguments
 * @argv: array of arguments
 *
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int s = 0;
	char *c;

	while (--argc)
	{
		for(c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"),1);
		s+= atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
