#include "lists.h"

/**
  * pop_listint - function that deletes head node of a linked list
  * @head: ...
  * Return: ...
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int m;

	m = (*head) ? ((*head)->n) : (0);

	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (m);
}
