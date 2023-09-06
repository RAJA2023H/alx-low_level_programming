#include "main.h"

/**
 * check_elf - Checks if a file is an ELF file.
 * @argc: argument count.
 * @argv: arguments value.
 * Description: If the file is not an ELF file - exit code 98.
 */
int main(int argc, char *argv[])
{
	FILE *pipe;
	char command[1024];
	ssize_t elf_read, elf_write;
	char elf_buffer[1024];

	if (argc != 2)
	{
		dprintf(2, "Usage: %s file\n", argv[0]);
		exit (98);
	}
	snprintf(command, sizeof(command), "readelf -h %s", argv[1]);
	pipe = popen(command, "r");
	if (pipe == NULL)
	{
		perror("Failed to popen");
		exit(98);
	}
	while ((elf_read = read(fileno(pipe), elf_buffer, sizeof(elf_buffer))) > 0)
	{
		if (elf_read == -1)
		{
			perror("read failed");
			exit(98);
		}
		elf_write = write(STDOUT_FILENO, elf_buffer, elf_read);
		if (elf_write == -1)
		{
			perror("write failed");
			exit(98);
		}
	}
	if(pclose(pipe) == -1)
	{
		perror("pclose failed");
		exit(98);
	}
	return (0);
}
