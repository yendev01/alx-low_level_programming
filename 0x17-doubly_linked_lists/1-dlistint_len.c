#include "lists.h"

/**
  * dlistint_len - function that returns the number of elements in a d list
  * @h: ...
  * Return: the number of elements in a linked list
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
