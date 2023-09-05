#include "main.h"

/**
 * append_text_to_file - function that convert
 * @filename: file.
 * @text_content: NULL terminated string.
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		bytesWrite = write(fd, text_content, strlen(text_content));
		if (bytesWrite == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
