#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints minimum number of coins
  * @argc: no. of command line arguments
  * @argv: string type command line argument
  * Return: 0, Always success
  */
int main(int argc, char *argv[])
{
	int cents;
	int Cvalue[5];
	int numC;
	int count;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	Cvalue[0] = 25;
	Cvalue[1] = 10;
	Cvalue[2] = 5;
	Cvalue[3] = 2;
	Cvalue[4] = 1;
	numC = sizeof(Cvalue) / sizeof(Cvalue[0]);

	count = 0;
	i = 0;

	while (cents > 0 && i < numC)
	{
		int num = cents / Cvalue[i];

		count += num;
		cents -= num * Cvalue[i];
		i++;
	}

	printf("%d\n", count);
	return (0);
}
