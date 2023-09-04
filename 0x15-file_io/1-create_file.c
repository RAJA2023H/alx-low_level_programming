#include "main.h"

/**
 * create_file - function that creates a file and writes content to it
 * @filename: name of the file to be created
 * @text_content: content to be written to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int df;
	int len = 0;
	ssize_t bytes_write;

	if (!filename)
		return (-1);

	df = open(filename, O_CREAT | O_WRONLY, 0600);/*Open the file for writing (create/truncate)*/
	if (df == -1)
		return (1);

	if (text_content)
	{
		len = strlen(text_content);
		bytes_write = write(df, text_content, len);
		if (bytes_write == -1)
		{
			close(df);
			return -1;
		}
	}
	close(df);  /*Close the file*/
	return (1);
}
