#include "main.h"
#include <stdio.h>


/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t br, bw;
	int fp;

	if (filename == NULL || !letters)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (0);
	}
	buf = (char *) malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fp);
		return (0);
	}
	br = read(fp, &buf[0], letters);
	if (br <= 0)
	{
		close(fp);
		free(buf);
		return (0);
	}

	bw = write(STDOUT_FILENO, &buf[0], br);
	if (bw == -1)
	{
		close(fp);
		free(buf);
		return (0);
	}
	close(fp);
	free(buf);
	return (br);
}
