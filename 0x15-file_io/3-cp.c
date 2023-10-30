#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
/**
 * copier - copies content of a file into another
 * @original: the name of the file to be copied
 * @duplicate: the name of the duplicate file
 * Return: 0 for success, -1 for failure
 */
int copier(int original, int duplicate)
{
	ssize_t result;
	char *buffer;

	buffer = (char *)malloc(1024);
	if (buffer == NULL)
		return (-1);
	while ((result = read(original, buffer, 1024)) > 0)
	{
		if (write(duplicate, buffer, result) != result)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", duplicate);
			free(buffer);
			return (-1);
		}
	}
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %d\n", original);
		free(buffer);
		return (-1);
	}
	free(buffer);
	return (0);
}
/**
 * main - this is the entry point
 * @argc: no of command line arguments
 * @argv: an array of strings containing the CL arguments
 * Return: 0 for success, non-zero for failure
 */
int main(int argc, char *argv[])
{
	int copy, dest, from;

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99);
	}
	copy = copier(from, dest);
	if (copy == -1)
		return (100);
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		return (100);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		return (100);
	}
	return (0);
}
