#include "main.h"
/**
 * read_textfile- reads a text file and prints it to the standard out
 * @filename: a string containing the filename
 * @letters: number of characters to be read and printed
 * Return: no of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t n;
	ssize_t byte;
	ssize_t written;

	written = 0;
	byte = 0;
	buf = (char *)malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	n = read(fd, buf, letters);
	if (n == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	while (written < n)
	{
		byte = write(STDOUT_FILENO, buf + written, n - written);
		if (byte == -1)
		{
			free(buf);
			close(fd);
			return (0);
		}
		written += byte;
	}
	close(fd);
	free(buf);
	return (byte);
}
