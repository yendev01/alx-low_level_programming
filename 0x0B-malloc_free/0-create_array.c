#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars and initializes it
  * @size: size of array to be created
  * @c: character for initialization
  * Return: returns NULL if size = 0
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
