#include "hash_tables.h"

hash_node_t *create_new_node(const char *key, const char *value);

/**
  * hash_table_set - function that adds an element to the hast table
  * @ht: destination hash table
  * @key: key
  * @value: value associated with the key
  * Return: 1 if successful, or 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *node;
	unsigned long int i;

	if (!ht || *key == '\n' ||*value == '\n')
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	if (!node)
	{
		newNode = create_new_node(key, value);
		if (newNode == NULL)
			return (0);
		ht->array[i] = newNode;
		return (1);
	}

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);

			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	newNode = create_new_node(key, value);
	if (newNode == NULL)
		return (0);
	newNode->next = ht->array[i];
	ht->array[i] = newNode;
	return (1);
}

/**
  * create_new_node - ...
  * @key: key
  * @value: value associated with the key
  * Return: pointer to node if successful, or NULL otherwise
  */


hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));


	if (!node)
	{
		return (NULL);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}
