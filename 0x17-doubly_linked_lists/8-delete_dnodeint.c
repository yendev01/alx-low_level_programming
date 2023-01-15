#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index index
  * @head: ...
  * @index: ...
  * Return: returns 1 if successful and -1 if not.
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *tempP;
	unsigned int i = 0;

	temp = *head;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		tempP = temp;
		if (!temp)
			return (-1);
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		tempP->next = NULL;
		free(temp);
		return (1);
	}
	tempP->next = temp->next;
	(temp->next)->prev = tempP;
	free(temp);
	return (1);
}
