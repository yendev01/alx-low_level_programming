#include "lists.h"


/**
  * print_listint - function that prints all the elements of a listint_t list
  * @h: ...
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	
	printf("%d\n", h->n);

	return (count);
}
