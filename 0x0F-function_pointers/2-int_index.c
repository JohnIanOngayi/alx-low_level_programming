#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * int_index - searches for an integer
 * @array: the arrat being searched
 * @size: the size of the array
 * @cmp: a pointer to a function that takes an integer as an argument
 *	and returns an integer
 * Return: the integer of the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
