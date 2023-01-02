#include "lists.h"
/**
  * add_nodeint - adds a new node at the start of a listint_t list
  * @head: ..
  * @n: ...
  * Return: a pointer
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->next = *head;
	newNode->n = n;
	*head = newNode;

	free(newNode);
	return (*head);

}
