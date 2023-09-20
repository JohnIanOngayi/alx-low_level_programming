#include <stdio.h>
#include <string.h>
/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: No of similar characters
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];

		if (s1[i] != s2[i])
			break;
	}
	return (res);
}
