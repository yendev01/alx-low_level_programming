#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end of a list
  * @head: ...
  * @str: ..
  * Return: ..
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode, *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->next = NULL;
	node->len = strlen(str);

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = node;

		return (node);
	}
}
