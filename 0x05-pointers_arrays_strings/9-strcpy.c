#include <stdio.h>
#include <string.h>
/**
  * _strcpy - copies string to another
  * @dest: destination string
  * @src: source string
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = strlen(src);
	for (i = 0; i < len + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
