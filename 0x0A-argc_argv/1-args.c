#include <stdio.h>

/**
 * main - program that counts arguments..
 *
 * @argc : int
 *
 * @argv : string
 *
 * Return: 0
 *
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

