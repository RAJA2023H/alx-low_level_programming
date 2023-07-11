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
	FILE *fp;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");

	if (fp == NULL)
	{
		return (0);
	}
	buf = (char *) malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}
	br = fread(buf, sizeof(char), letters, fp);
	if (br <= 0)
	{
		fclose(fp);
		free(buf);
		return (0);
	}
	buf[br] = '\0';

	bw = fwrite(buf, sizeof(char), br, stdout);
	if (bw != br)
	{
		fclose(fp);
		free(buf);
		return (0);
	}
	fclose(fp);
	free(buf);
	return (br);
}
