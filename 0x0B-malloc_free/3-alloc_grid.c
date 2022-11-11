#include <stdlib.h>

/**
  * alloc_grid - function that returns a pointer to a 2d array of int
  * @width: width of array
  * @height: height of array
  * Return: returns a pointer to a 2d array
  */

int **alloc_grid(int width, int height)
{
	int **array, i, n, m;
	
	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(**array));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			array[n][m] = 0;
		}
	}

	return (array);
}
