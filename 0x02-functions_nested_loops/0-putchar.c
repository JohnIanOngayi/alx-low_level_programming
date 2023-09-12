#include <stdio.h>
#include "main.h"
/**
  * main - this is the entry point
  * parameters: no paramters
  * Description: calls putchar
  * Return: A zero integer value
  */
int main(void)
{
	char Word[] = "_putchar\n";
	int i;

	for (i = 0; Word[i] != '\0'; i++)
	{
		_putchar(Word[i]);
	}
	return (0);
}
