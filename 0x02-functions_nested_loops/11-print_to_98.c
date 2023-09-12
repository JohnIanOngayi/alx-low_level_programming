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
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d", n);
}
