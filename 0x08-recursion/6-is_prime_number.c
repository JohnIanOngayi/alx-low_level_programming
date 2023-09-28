#include <stdio.h>
#include <math.h>
/**
  * divisible - checks if a number is divisible by any integer
  * @a: the number being checked
  * @b: the factor being checked for divisibility
  * Return: 1 if the number is divisible, 0 otherwise
  */
int divisible(int a, int b)
{
	if (a < 0)
		return (0);
	if ((b * b) == a)
		return (0);
	if ((b * b) > a)
		return (1);
	return (divisible(a, (b + 1)));
}

/**
  * is_prime_number - checks if a number is prime
  * @n: the number whose primality is being evaluated
  * Return: 1 if the number is prime, 0 otherwise
  */
int is_prime_number(int n)
{
	return (divisible(n, 0));
}
