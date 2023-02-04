#include "hash_tables.h"

/**
  * hash_table_create - function that creates a hash table
  * @size: ...
  * Return: returns a pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *tableau = malloc(sizeof(hash_table_t));

	if (!tableau)
		return (NULL);

	tableau->array = malloc(size * sizeof(hash_node_t *));
	if (tableau->array == NULL)
	{
		free(tableau);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tableau->array[i] = NULL;
	}
	return (tableau);
}
