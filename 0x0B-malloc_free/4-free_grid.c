#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * free_grid - frees the previously allocated two dimensional grid
  * @grid: the address of the two dimensional grid
  * @height: the height of the two dimensional grid
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
