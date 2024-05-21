#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches integer array for value
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value being searched for
 * Return: index of value or -1 if none-existent
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t m = 0;
	size_t R = 0;
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	L = 0;
	R = size - 1;

	while (L <= R)
	{
		printf("Searching in array:");
		for (i = L; i <= R; i++)
		{
			printf(" %d", array[i]);
			if (i != R)
				printf(",");
		}
		printf("\n");
		m = (L + R) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			L = m + 1;
		else
			R = m - 1;
	}
	return (-1);
}
