#include <stdio.h>
#include <string.h>
/**
  * print_diagsums - prints the sum of the twodiagonals of a square matrix
  * @a: the square matrix
  * @size: the size of the square matrix
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i;
	int primary;
	int secondary;

	primary = 0;
	secondary = 0;

	for (i = 0; i < size; i++)
	{
		primary = primary + a[i * size + i];
		secondary = secondary + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", primary, secondary);
}
