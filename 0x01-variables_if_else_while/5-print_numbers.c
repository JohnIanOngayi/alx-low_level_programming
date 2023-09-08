#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints all base 10 numerals less than 10
  * Return: A zero integer value
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
