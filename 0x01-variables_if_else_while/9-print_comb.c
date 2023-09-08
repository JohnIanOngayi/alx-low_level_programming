#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints all single digits
  * Return: A zero integer value
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((char)num + '0');
		if (num == 9)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
