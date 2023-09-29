#include <stdio.h>

/**
  * main - prints program name followed by a new line
  * @argc: no. of command line arguments
  * @argv: string type command line argument
  * Return: 0, Always success
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
