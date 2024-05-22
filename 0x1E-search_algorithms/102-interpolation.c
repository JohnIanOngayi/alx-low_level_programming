#include "search_algos.h"

/**
 * interpolation_search - searches integer array for value
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value being searched for
 * Return: index of value or -1 if none-existent
 */


int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0;
	size_t pos = 0;

	if (!array || size == 0)
		return (-1);
	high = size - 1;
	while (array[low] <= value && array[high] >= value && low < high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		else if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			low = pos + 1;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			high = pos - 1;
		}
	}
	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
