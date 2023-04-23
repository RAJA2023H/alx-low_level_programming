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
	char *oc = (char *) main;
	int x, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < nb; x++)
	{
		printf("%02x", oc[x] & 0xFF);
		if (x != nb - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
