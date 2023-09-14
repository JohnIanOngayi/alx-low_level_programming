#include "main.h"
/**
  * print_triangle - Prints the classic Mario triangles
  * @size: height and breadth of triangles
  * Ret``urn: Void
  */
void print_triangle(int size)
{
	int height;
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (i = 1; i <= size - height; i++)
				_putchar(' ');
			for (j = 1; j <= height; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
