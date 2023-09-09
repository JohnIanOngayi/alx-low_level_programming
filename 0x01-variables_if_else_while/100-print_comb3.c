#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints out unique combnations of two digits
  * Return: A zero integer value
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar((char) i + '0');
			putchar((char) j + '0');
			if (i == 8)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
