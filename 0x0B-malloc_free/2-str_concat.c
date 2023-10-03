#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - Concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * Return: a pointer to the concatenated string or null
  */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	size_t lent;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	lent = len1 + len2 + 1;

	ptr = (char *)malloc((lent) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
