#include "main.h"
/**
  * _isdigit - checks for a digit 0 through 9
  * @c: the digit beinng checked
  * Return: 1 if true, o if false
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
