#include <stdio.h>
/**
  * main - This is the entry point
  * parameters: no parameters
  * Description: prints uniue combinations of three digits
  * Return: A zero integer value
  */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar((char) i + '0');
				putchar((char) j + '0');
				putchar((char) k + '0');
				if (i == 7)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
