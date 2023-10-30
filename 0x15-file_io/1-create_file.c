#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * create_file - creates a text file and writes into it
 * @filename: a string containing the filename
 * @text_content: characters to be read and printed
 * Return: no of letters printed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);
	n = write(fd, text_content, len);
	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
