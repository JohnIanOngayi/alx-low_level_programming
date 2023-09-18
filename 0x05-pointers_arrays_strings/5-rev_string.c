#include <stdio.h>
#include <string.h>
/**
  * rev_string - prints a string in reverse
  * @s: the stnring being reversed
  * Return: void
  */
void rev_string(char *s)
{
	int i;
	int j;
	int tmp;

	for (i = 0; s[i] != 0; i++)
	{
	}
	j = 0;
	i = i - 1;

	while (j < i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
		i--;
	}
}
