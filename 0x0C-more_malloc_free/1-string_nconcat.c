#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * string_nconcat - a function that concatenates two strings
  * @s1: The first string
  * @s2: The second string
  * @n: Number of bytes to be copied
  * Return: A pointer to the newly allocated space or null
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1;
	unsigned int n2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n1 = strlen(s1);
	n2 = strlen(s2);
	if (n >= n2)
		n = n2;
	ptr = (char *)malloc(n1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
