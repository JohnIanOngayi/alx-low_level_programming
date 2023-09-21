#include <stdio.h>
#include <ctype.h>
/**
  * leet - encodes a string in 1337
  * @a: string being encoded
  * Return: A pointer to a leeted string
  */
char *leet(char *a)
{
	int i;
	int j;
	char upper[5] = "AEOTL";
	char leet[5] = "43071";

	for (i = 0; i != '0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (toupper(a[i]) == upper[j])
				a[i] = leet[j];
		}
	}
	return (a);
}
