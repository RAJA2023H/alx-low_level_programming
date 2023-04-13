#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function that prints program name.
 * @argv: arguments array.
 * @argc: arguments counter.
 * Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);

	return (0);
}
