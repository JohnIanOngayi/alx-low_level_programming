#include "main.h"
/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: integer controlling width of space
  * Return: Void
  */
void print_diagonal(int n)
{
	int length;
	int tmp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (length = 1; length <= n; length++)
		{
			for (tmp = 1; tmp <= length; tmp++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
