#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - creates an array of initialised characters
 * @size: the size of the memory to print
 * @c: the initializing character
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
