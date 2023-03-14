#include "main.h"
#include <stdlib.h>

/**
  * free_grid: frees a 2 dimensional grid previously created by
  * alloc_grid function
  * @grid: the 2-dimensional array of integers to be freed
  * @height: height of grid int
  *
  * Return: nothing
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
