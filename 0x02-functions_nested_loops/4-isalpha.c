#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
  * _isalpha - checks alphabetic characters
  * @c: character c passed in as an integer
  * Description: checks for alphabets
  * Return: 1 if alphabet; 0 if otherwise
  */
int _isalpha(int c)
{
	return (isupper(c) || islower(c));
}
