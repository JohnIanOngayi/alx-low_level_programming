#include <stdio.h>
#include "main.h"
/**
  * print_alphabet - a declared function
  * parameters: no parameters
  * Description: prints lowercase alphabets
  * Return: No return value
  */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
