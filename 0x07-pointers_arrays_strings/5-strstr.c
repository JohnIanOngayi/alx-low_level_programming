#include <stdio.h>
#include <string.h>
/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: the string being searched
 * @needle: the string being searched for
 * Return: a pointer to the first occurrence of needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *str;
	int j;
	int n = strlen(needle);

	for (str = haystack; *str != '\0'; str++)
	{
		for (j = 0; j < n; j++)
		{
			if (str[j] != needle[j])
			{
				break;
			}
		}
		if (j == n)
		{
			return (str);
		}
	}
	return (NULL);
}

