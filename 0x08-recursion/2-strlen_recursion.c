#include <stdio.h>
#include "main.h"
/**
  * _strlen_recursion - Returns the length of a string
  * @s: string being evaluated
  * Return: a positive integer value
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
