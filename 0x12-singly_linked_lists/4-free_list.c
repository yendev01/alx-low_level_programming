#include <stdlib.h>
#include "lists.h"

/**
  * free_list - function that frees a list_t
  * @head: ...
  * Return: returns nothing
  */

void free_list(list_t *head)
{
	list_t *m;

	while (m)
	{
		m = head->next;
		free(head->str);
		free(head);
		head = m;
	}
}
