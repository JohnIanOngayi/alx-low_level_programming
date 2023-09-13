#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - prints to 98
  * @n: starting point integer passed as an argument
  * Description: prints 0 to 98
  * Return: an integer value
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
