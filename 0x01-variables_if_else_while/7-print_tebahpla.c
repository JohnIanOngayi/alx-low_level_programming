#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints lower alphabets in reverse
  * Return: A zero integer value
  */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
