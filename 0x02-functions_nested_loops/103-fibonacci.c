#include <stdio.h>
/**
 * main - This is the entry point
 * Description: Prints the sum of even fibonacci numbers
 *	less than 4000000
 * Return: A zero integer value
 */
int main(void)
{
	long int Fibonacci[60];
	int n;
	long int sum;

	Fibonacci[0] = 1;
	Fibonacci[1] = 2;
	n = 2;
	sum =  0;

	while (Fibonacci[n - 1] < 4000000)
	{
		Fibonacci[n] = Fibonacci[n - 1] + Fibonacci[n - 2];
			if ((Fibonacci[n] % 2) == 0)
			{
				sum = sum + Fibonacci[n];
			}
			n++;
	}
	printf("%lu\n", sum);
	return (0);
}
