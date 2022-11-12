#include <stdlib.h>

/**
  * _calloc - function that allocates memory for an array using malloc
  * @nmemb: number of elements
  * @size: size in bytes of each element
  * Return: returns nothing
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);

	if (array == NULL)
	{
		return (NULL);
	}
	return ((void *)array);
}
