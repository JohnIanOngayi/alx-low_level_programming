#include <stdio.h>
#include "main.h"
/**
  * calculator - evaluates the factors twice simultaneously
  * @n: number being evaluated
  * @beg: one of the threads
  * @end: one of the threads
  * Return: a positive integer value
  */
long int calculator(long int n, long int beg, long int end)
{
	long int avg;
	long int square;

	if (beg > end)
		return (-1);


	avg = (beg + end) / 2;
	square = avg * avg;


	if (square == n)
	{
		return (avg);
	}
	else if (square < n)
	{
		return (calculator(n, avg + 1, end));
	}
	else
	{
		return (calculator(n, beg, avg - 1));
	}
}

/**
  * _sqrt_recursion - returns the natural squareroot of a number
  * @n: the number whose natural squareroot is being evaluated
  * Return: a positive integer value
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculator((long int)n, 0, (long int)n));
}
