#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - allocates memory for a 2D array of integers
  * @width: the number of elements per 1D array in the 2D array
  * @height: the number of 1D arrays in the 2D array
  * Return: a pointer to the 2D array
  */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
