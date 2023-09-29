#include <stdio.h>

/**
  * main - prints number of command line arguments passed to it
  * @argc: no. of command line arguments
  * @argv: string type command line argument
  * Return: 0, Always success
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
