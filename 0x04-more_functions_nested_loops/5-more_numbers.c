#include "main.h"
/**
  * more_numbers - prints 0 - 14 te times
  * Return: Void
  */
void more_numbers(void)
{
	int i;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if ((c / 10) != 0)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
