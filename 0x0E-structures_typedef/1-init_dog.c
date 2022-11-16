#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - function that initializes a variable of type struct dog
  * @d: d
  * @name: dog's name
  * @age: dog's age
  * @owner: owner of the dog
  * Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
