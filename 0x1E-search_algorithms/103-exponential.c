#include "search_algos.h"

int binary_search(int *array, size_t size, int value);

/**
 * exponential_search - searches integer array for value
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value being searched for
 * Return: index of value or -1 if none-existent
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = 0;
	size_t i = 1;
	int index;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right - 1);
	index = binary_search(array + left, right - left, value);

	if (index != -1)
		return (index + left);
	return (-1);
}
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
