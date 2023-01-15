#include "lists.h"

/**
  * sum_dlistint - function that returns the sum of all data(n) of dlist
  * @head: ...
  * Return: sum or 0 if empty
  */


int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (0);

	temp = head;
	while (temp)
	{
		if (!temp)
		{
			sum += 0;
			continue;
		}
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
