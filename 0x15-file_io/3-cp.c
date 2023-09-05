#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * error_exit - Display an error message and exit the program.
 * @msg: The error message to display.
 * Return: No return.
 */
void error_exit(const char *msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(1);
}
/**
 * open_file - Open a file and handle errors.
 * @filename: The name of the file to open.
 * @flags: Flags to use when opening the file.
 * Return: The file descriptor if successful, or it exits on failure.
 */
int open_file(const char *filename, int flags)
{
	int fd = open(filename, flags);

	if (fd == -1)
		error_exit("Can't open file");
	return (fd);
}
/**
 * copy_file - Copy the contents of one file to another.
 * @source_fd: The file descriptor of the source file.
 * @dest_fd: The file descriptor of the destination file.
 * Return: No return.
 */
void copy_file(int source_fd, int dest_fd)
{
	char buf[1024];
	ssize_t nchars, nwr;

	while ((nchars = read(source_fd, buf, sizeof(buf))) > 0)
	{
		if (nchars == -1)
			error_exit("Can't read from file");
		nwr = write(dest_fd, buf, nchars);
		if (nwr == -1)
			error_exit("Can't write to file");
	}
	if (nchars == -1)
		error_exit("Can't read from file");
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to");

	source_fd = open_file(argv[1], O_RDONLY);
	dest_fd = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	copy_file(source_fd, dest_fd);
	if (close(source_fd) == -1)
		error_exit("Can't close source file");
	if (close(dest_fd) == -1)
		error_exit("Can't close destination file");
	return (0);
}
