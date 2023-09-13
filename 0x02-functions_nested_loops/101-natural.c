#include <stdio.h>
/**
  * main - The entrey point
  * parameters: no parameters
  * Description: Prints the sum of all multiples of 3 and 5
  * Return: 0, Always success
  */
int main(void)
{
	int num;
	int sum;

	sum = 0;
	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
