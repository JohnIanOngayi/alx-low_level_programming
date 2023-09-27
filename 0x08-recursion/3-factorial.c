#include <stdio.h>
/**
  * factorial - calculates the factorial of a number
  * @n: the number whose factorial is being evaluated
  * Return: A positive integer
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
