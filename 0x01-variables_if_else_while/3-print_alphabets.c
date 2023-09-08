#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints lower and uppercase alphabets
  * Return: A zero integer value
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
