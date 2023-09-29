#include <stdio.h>

/**
  * main - prints all arguments passed to it
  * @argc: no. of command line arguments
  * @argv: string type command line argument
  * Return: 0, Always success
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
