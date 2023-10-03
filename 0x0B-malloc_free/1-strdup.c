#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _strdup - returns a pointer to the duplicate of a string provided
  * @str: the string to be duplicated
  * Return: a pointe to the new duplicate string or NULL
  */
char *_strdup(char *str)
{
	int n;
	int i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	n = strlen(str) + 1;
	ptr = (char *)malloc(n * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = str[i];

	return (ptr);
}
