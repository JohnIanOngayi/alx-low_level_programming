#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of the prefix substring
 * @s: string being searched
 * @accept: string being searched for
 * Return: a non-negatie integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int match;
	int length;
	unsigned int lens;
	unsigned int lena;
	unsigned int i;
	unsigned int j;

	lens = strlen(s);
	lena = strlen(accept);
	length = 0;
	for (i = 0; i < lens; i++)
	{
		match = 0;
		for (j = 0; j < lena; j++)
		{
			if (accept[j] == s[i])
			{
				match = 1;
				break;
			}
		}
		if (match == 1)
			length++;
		else
			break;
	}
	return (length);
}
