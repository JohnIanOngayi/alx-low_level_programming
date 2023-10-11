#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_iterator - iterates through an array
 * @array: the array being iterated through
 * @size: the length of the array
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < size; i++)
		action(array[i]);
}
