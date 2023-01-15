#include "lists.h"

/**
  * add_dnodeint_end - function that adds a new node at the end of a dlistint
  * @head: ...
  * @n: ...
  * Return: the address of the new element, or NULL if it failed
  */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newNode->prev = temp;
	temp->next = newNode;
	return (newNode);
}
