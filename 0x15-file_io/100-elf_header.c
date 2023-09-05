#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	int fd;
	char command[1024];
	ssize_t bytesRead;
	char buffer[1];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		return (1);
	}
	snprintf(command, sizeof(command), "readelf -h %s", argv[1]);
	fp = popen(command, "r");
	if (fp == NULL)
	{
		perror("Failed to run command");
		return (1);
	}
	fd = fileno(fp);
	while ((bytesRead = read(fd, buffer, sizeof(buffer))) > 0)
	{
		write(STDOUT_FILENO, buffer, bytesRead);
	}
	pclose(fp);
	return 0;
}
