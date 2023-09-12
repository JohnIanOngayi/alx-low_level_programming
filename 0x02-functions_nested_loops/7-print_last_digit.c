#include <stdio.h>
#include "main.h"
/**
  * print_last_digit - prints the last digit of a number.
  * @num: digit whose last number is printed
  * Return: last digit
  */
int print_last_digit(int num)
{
	int tmp;

	if (num > 0)
	{
		tmp = num % 10;
		_putchar(tmp + '0');
		return (num % 10);
	}
	else
	{
		tmp = num % 10;
		_putchar(tmp + '0');
		return (num % 10);
	}
}
