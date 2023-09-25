#include <stdio.h>
#include <string.h>
/**
  * _strpbrk - locates the first occurence of a string's elements in anothers
  * @s: the string being searched
  * @accept: the string being searched for
  * Return: a pointer to the first occurence of accept in s or null
  */
char *_strpbrk(char *s, char *accept)
{
	char *str;
	char *j;

	for (str = s; *str != '\0'; str++)
	{
		for (j = accept; *j != '\0'; j++)
		{
			if (*str == *j)
			{
				return (str);
			}
		}
	}
	return (NULL);
}
