#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - multiplies two numbers
  * @argc: no. of command line arguments
  * @argv: string type command line argument
  * Return: 0 for success
  */
int main(int argc, char *argv[])
{
	int prod;
	int n1;
	int n2;


	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		prod = n1 * n2;

		printf("%d\n", prod);
		return (0);
	}
}
