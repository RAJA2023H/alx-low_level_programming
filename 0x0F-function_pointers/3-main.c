#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - entry point
 *@argc: count arguments
 *@argv: pointer to array
 *
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int n1, n2, calc;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operator = argv[2];

	if (!get_op_func(operator))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(n1, n2);
	printf("%d\n", calc);

	return (0);
}
