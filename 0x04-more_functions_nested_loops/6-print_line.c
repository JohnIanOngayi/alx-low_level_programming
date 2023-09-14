#include "main.h"
/**
  * print_line - draws a line in the terminal
  * @n: integer dictating line's length
  * Return: 0;
  */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 1; length <= n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
