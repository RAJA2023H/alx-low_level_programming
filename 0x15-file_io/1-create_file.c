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

	if (!filename)
		return (-1);

	df = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	/*Open the file for writing (create/truncate)*/
	if (df == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		write(df, text_content, len);
	}
	close(df);  /*Close the file*/
	return (1);
}
