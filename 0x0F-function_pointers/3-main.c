#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - runs the elementary calculator
 * @argc: no of command line arguments
 * @argv: array of command line arguments
 * Return: 0, Always success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;
	int (*select)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	select = get_op_func(argv[2]);

	if (!select)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = select(num1, num2);
	printf("%d\n", result);

	return (0);
}
