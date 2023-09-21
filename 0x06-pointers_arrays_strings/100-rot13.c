#include <stdio.h>
/**
  * rot13 - encodes a string in ROT-13
  * @a: the string being encoded
  * Return: a pointer to the encoded string
  */
char *rot13(char *a)
{
	int i;
	int j;
	char def[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == def[j])
			{
				a[i] = rot[j];
				break;
			}
		}
	}
	return (a);
}
