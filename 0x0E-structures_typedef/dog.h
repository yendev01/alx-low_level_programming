#ifndef HEADER_FILE
#define HEADER_FILE

/**
  * struct dog - structure to facilitate description of dogs
  * @name: name
  * @age: age
  * @owner: owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
