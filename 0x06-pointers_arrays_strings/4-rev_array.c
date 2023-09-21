#include <stdio.h>
#include <stdlib.h>
/**
  * reverse_array -  prints elements of an array in reverse
  * @a: the integer array being reversed
  * @n: number of elements in the array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
