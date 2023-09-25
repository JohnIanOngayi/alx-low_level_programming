#include <stdio.h>
#include <string.h>
/**
  * _memcpy - copies memory from one area to another
  * @dest: where the memory is copied to
  * @src: the memory being copied
  * @n: number of bytes to be copied
  * Return: a pointer to dest or NULL if dest doesn't exist
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
