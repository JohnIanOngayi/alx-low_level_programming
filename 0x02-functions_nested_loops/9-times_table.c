#include <stdio.h>
#include "main.h"
/**
  * times_table - prints a 0-9 multiplication table
  * parameters: no parameters
  * Return: void, no return value
  */
void times_table(void)
{
	int num;
	int mul;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			prod = num * mul;
			if (mul == 0)
				printf("%d", 0);
			if (prod != 0)
			{
				if ((prod / 100) == 0)
				{
					_putchar(' ');
				}
				else
				{
				_putchar((prod / 100) + '0');
				}
				if ((prod / 10) == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((prod / 10) + '0');
				}
			}
			_putchar((prod % 10) + '0');
			else if (mul == 9)
				continue;
		:wq_putchar(',');
		}
	_putchar('\n');
	}
}
