#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - function that frees dogs
  * @d: input
  * Return: returns nothing
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
