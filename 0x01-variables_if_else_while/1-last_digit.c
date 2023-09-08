#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - This is the netry point
  * parameters: no parameters
  * Description: Checks if last digit against 6
  * Return: A zero integer value
  */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (n > 0)
	{
		if (d > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, d);
		}
		else if (d == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, d);
		}
		else
		{
			printf("Last digit of %d is %d and less than 6 and not 0\n", n, d);
		}
	}
	else if (n < 0)
	{
		if (d == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, d);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
		}
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	return (0);
}
