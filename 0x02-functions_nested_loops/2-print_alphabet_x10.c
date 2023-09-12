#include <stdio.h>
#include "main.h"
/**
  * print_alphabet_x10 - function utility library
  * parameters: no parametera
  * Description: Prints lowercase alphabets ten times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
