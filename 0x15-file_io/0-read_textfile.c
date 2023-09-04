#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (-1);
	}
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1)
	{
		close(fd);
		free(buffer);
		return (-1);
	}
	close(fd);
	free(buffer);
	return (bytes_read);
}
