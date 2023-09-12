#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
  * _islower - checks lowercase characters
  * @c: character c passed in as an integer
  * Description: checks for lowercase
  * Return: 1 if loweercase; 0 if otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
