#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: ...
  * @idx: ...
  * @n: ...
  * Return: the address of the new node or NULL if failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tempP, *temp, *newNode;
	unsigned int i = 0;

	if (!*h)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	temp = *h;
	while (i < idx)
	{
		tempP = temp;
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	temp->prev = newNode;
	newNode->next = temp;
	newNode->prev = tempP;
	tempP->next = newNode;

	return (newNode);
}
