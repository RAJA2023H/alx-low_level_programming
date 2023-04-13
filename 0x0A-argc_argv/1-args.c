#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of arguments passed to the program.
 * @argc: argumnt counter.
 * @argv: argument array.
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	(void) argv;
		printf("%d\n", argc - 1);

		return (0);
}
