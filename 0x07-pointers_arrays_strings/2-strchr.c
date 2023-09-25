#include <stdio.h>
#include <string.h>
/**
  * _strchr - locates a character in a string
  * @s: the string being searched
  * @c: the character being searched for
  * Return: a pointer to the first occurrence of c and NULL if not found
  */
char *_strchr(char *s, char c)
{
	char *str;

	str = s;
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)(str));
		str++;
	}
	if (*str == c)
		return (str);
	else
		return (NULL);
}
