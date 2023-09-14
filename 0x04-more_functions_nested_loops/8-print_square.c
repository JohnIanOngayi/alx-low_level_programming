#include "main.h"
/**
  * print_square - prints a square then a new line
  * @size: is the integer size of the square
  * Return: Void
  */
void print_square(int size)
{
	int length;
	int width;

	if (size <= 0)
		_putchar('\n');
	else
		for (length = 1; length <= size; length++)
		{
			for (width = 1; width <= size; width++)
				_putchar(35);
			_putchar('\n');
		}
}
