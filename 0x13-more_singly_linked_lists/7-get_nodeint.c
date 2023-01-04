#include "lists.h"

/**
  * get_nodeint_at_index - function that returns nth node of a linked list
  * @head: ...
  * @index: ...
  * Return: ....
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index >= 1)
	{
		if (!head)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
