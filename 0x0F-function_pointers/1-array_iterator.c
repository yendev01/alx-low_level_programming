#include <stddef.h>
/**
  * array_iterator - function that executes a func given a parameter ...
  * @array: array
  * @size: size of array
  * @action: pointer to function
  * Return: returns nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i, j;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);

		for (j = 0; i < size; j++)
			(*action)(*(array + j));
	}
}
