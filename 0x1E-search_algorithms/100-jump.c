#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches integer array for value
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value being searched for
 * Return: index of value or -1 if none-existent
 */


int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), left = 0, right = 0;

	if (!array)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	right = right < size ? right : size - 1;

	for (; left <= right; left++)
	{
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
	}

	return (-1);
}
