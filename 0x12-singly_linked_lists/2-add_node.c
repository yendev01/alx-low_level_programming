#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node - ...
  * @head: ...
  * @str: ...
  * Return: address of the new element or NULL
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h = malloc(sizeof(list_t));

	if (!str)
		return (NULL);
	h->str = strdup(str);
	h->len = (unsigned int)strlen(str);
	h->next = *head;

	*head = h;

	return (*head);
}
