#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a list
  * @head: ...
  * @n: ...
  * Return: the address of the new element or NULL
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}

	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (*head);
}
