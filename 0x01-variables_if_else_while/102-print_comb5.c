#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints unique combinations
  *	of two two digit numbers
  * Return: A zero integer value
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i == 98 && j == 99)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
