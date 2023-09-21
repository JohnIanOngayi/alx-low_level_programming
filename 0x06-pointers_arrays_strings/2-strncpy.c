#include <stdio.h>
#include <string.h>
/**
  * _strncpy - copies contents of a string to another
  * @dest: the string being pasted onto
  * @src: the string being copied
  * @n: length of string
  * Return: A pointer to an array
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
