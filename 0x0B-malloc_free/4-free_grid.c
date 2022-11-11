#include <stdlib.h>

/**
  * free_grid - function that frees a 2-d grid
  * @grid: grid to be freed
  * @height: height of the 2d array
  * Return: void
  */

void free_grid(int **grid, int height)
{
	if (grid != NULL || height != 0)
	{
		int i;

		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
