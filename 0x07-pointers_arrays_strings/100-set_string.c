#include <stdio.h>
/**
  * set_string - sets the value of a pointer to a char
  * @s: an array of characters
  * @to: an array of characters
  * Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
