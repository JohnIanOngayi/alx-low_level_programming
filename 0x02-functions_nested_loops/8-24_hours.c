#include <stdio.h>
#include "main.h"
/**
  * jack_bauer - prints every minute of the day
  * parameters: no parameters
  * Return: Void, no return value
  */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	m = 0;
	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
