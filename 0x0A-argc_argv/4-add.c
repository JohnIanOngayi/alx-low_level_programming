#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: no. of command line arguments
  * @argv: string type command line argument
  * Return: 0, Always success
  */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int add;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	add = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < ((int) strlen(argv[i])); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		if ((atoi(argv[i]) <= 0))
		{
			printf("Error\n");
			return (1);
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
