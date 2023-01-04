#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes a specific node
  * @head: ...
  * @index: ...
  * Return: 1 if succeeded, and -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;

	tmp = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		tmp2 = (*head)->next;
		free(*head);
		*head = tmp2;
		return (1);
	}

	while (index > 1)
	{
		tmp = tmp->next;
		index--;
		if (!tmp)
			return (-1);
	}

	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);
	return (1);

}
