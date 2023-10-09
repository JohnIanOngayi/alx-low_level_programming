#include <stdio.h>
#include <stdlib.h>
/**
  * main - Uses macros to print the file from which it was compiled
  * Return: 0 Always success.
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
