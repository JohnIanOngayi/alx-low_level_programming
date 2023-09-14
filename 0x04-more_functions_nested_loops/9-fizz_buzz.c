#include <stdio.h>
/**
  * main - The FizzBuzz Test
  * Description: Fizz for multiple of 3 and buzz for multiples of 5
  * Return: 0, Always Success
  */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 100)
			printf("Buzz");
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz ");
		else if ((n % 3) == 0)
			printf("Fizz ");
		else if ((n % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
