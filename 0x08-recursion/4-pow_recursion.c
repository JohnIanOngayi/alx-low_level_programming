#include <stdio.h>
/**
  * _pow_recursion - raises a number toa power
  * @x: the base number
  * @y: the exponent
  * Return: A non- zero integer value
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
