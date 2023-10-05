#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * malloc_checked - Allocates memory using malloc
  * @b: size in bytes of memory to be allocated
  * Return: A void pointer to the newly allocated memory or NULL
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
