#include "lists.h"

/**
  * free_listint - function that frees a listint_t list
  * @head: ...
  * Return: nothing
  */

void free_listint(listint_t *head)
{
	listint_t *temp1, *temp2;

	temp1 = head;

	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;

	}
}
