#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the previously allocated memory
 * @old_size: size in bytes of the memory allocated for ptr
 * @new_size: size in bytes of the ner memory block
 * Return: a pointer to the newly allocated memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;
	unsigned int n;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	s = malloc(new_size);

	if (s == NULL)
		return (NULL);

	n = (old_size < new_size) ? old_size : new_size;
	memcpy(s, ptr, n);
	free(ptr);
	return (s);
}
