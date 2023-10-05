#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer in the array of integers
 * @max: maximum integer in the array of integers
 * Return: a pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = min + i;
	return (ptr);
}
