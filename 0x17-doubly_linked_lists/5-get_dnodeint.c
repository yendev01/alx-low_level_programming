#include "lists.h"

/**
  * get_dnodeint_at_index - returns nth node of dlist
  * @head: ...
  * @index: ...
  * Return: nth node
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *indexNode;

	if (!head)
		return (NULL);
	indexNode = head;
	while (i < index)
	{
		if (indexNode == NULL)
			return (NULL);
		indexNode = indexNode->next;
		i++;
	}

	return (indexNode);
}
