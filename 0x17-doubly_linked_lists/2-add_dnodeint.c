#include "lists.h"

/**
  * add_dnodeint - function that adds a new node at the beginning of a dlistint
  * @head: ...
  * @n: ...
  * Return: the address of the new element or NULL if failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->next = *head;
	newNode->n = n;
	newNode->prev = NULL;
	*head = newNode;

	return (newNode);
}
