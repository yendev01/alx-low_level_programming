#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new node
  * @head: ...
  * @idx: ...
  * @n: ...
  * Return: the address of the new node or NULL
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp2;

	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	temp2 = (*head);
	newNode->n = n;

	if (idx == 0)
	{
		*head = newNode;
		newNode->next = temp2;
		return (newNode);
	}
	while (idx > 1)
	{
		temp2 = (temp2)->next;
		idx--;
		if (!temp2)
			return (NULL);
	}

	temp = (temp2)->next;
	temp2->next = newNode;
	newNode->next = temp;
	return (newNode);
}
