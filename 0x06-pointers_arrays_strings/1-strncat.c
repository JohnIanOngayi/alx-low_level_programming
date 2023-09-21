#include <stdio.h>
/**
  * _strncat - conactenates two strings
  *@dest: the main string
  * @src: thestring being concatenated onto dest
  * @n: number of characters to be attached
  * Return: A pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
