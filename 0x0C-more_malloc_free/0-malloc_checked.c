#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: input
  * Return: returns nothing
  */

void *malloc_checked(unsigned int b)
{
	void *reserve;

	if (b == 0)
	{
		exit(98);
	}
	reserve = malloc(b);

	if (reserve == NULL)
	{
		exit(98);
	}

	return ((void *)reserve);
}
