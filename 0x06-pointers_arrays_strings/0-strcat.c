#include <stdio.h>
/**
  * _strcat - conactenates two strings
  *@dest: the main string
  * @src: thestring being concatenated onto dest
  * Return: A pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	size_t i;
	size_t j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
