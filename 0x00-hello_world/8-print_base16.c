#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints all base 16 numners in lower case
  * Return: A zero integer value
  */
int main(void)
{
	int num;
	char base_16;

	for (num = 0; num <= 9; num++)
		putchar((char) num + '0');
	for (base_16 = 'a'; base_16 <= 'f'; base_16++)
		putchar(base_16);
	putchar('\n');
	return (0);
}
