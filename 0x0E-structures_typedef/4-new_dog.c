#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
  * new_dog - function
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: returns a pointer to that instance
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * strlen(name) + 1);

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * strlen(name) + 1);
	if (doggy->name == NULL || doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	strcpy(doggy->name, name);
	strcpy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);
}
