#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints lowercase except q nad e
  * Return: A zero integer value
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e')
			continue;
		if (letter == 'q')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
