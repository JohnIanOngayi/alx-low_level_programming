#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
/**
 * _calloc - alocates multiple contiguous blocks of memory
 * @nmemb: number of blocks or elements
 * @size: size in bytes of each member
 * Return: a pointer to the allocated meory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)(ptr) + i) = 0;
	return (ptr);
}
