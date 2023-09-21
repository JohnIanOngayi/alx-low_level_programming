#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
  * cap_string - capitalises all words in a string
  * @a: the string being capitalised
  * Return: a pointer to capitalised string
  */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0)
			a[i] = toupper(a[i]);

		switch (a[i - 1])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				a[i] = toupper(a[i]);
				break;
		}
	}

	return (a);
}

