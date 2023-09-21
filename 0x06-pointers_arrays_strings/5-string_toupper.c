#include <stdio.h>
/**
  * string_toupper - changes letters to uppercase
  * @a: un unnamed String
  * Return: A pointer to the processed string
  */
char *string_toupper(char *a)
{
	int i;
	char upper[26];

	for (i = 0; i < 26; i++)
	{
		upper[i] = 'A' + i;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = upper[a[i] - 'a'];
	}
	return (a);
}
