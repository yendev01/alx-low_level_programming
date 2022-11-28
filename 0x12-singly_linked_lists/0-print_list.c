#include <stdio.h>
#include "lists.h"

/**
  * print_list - function that prints all the elements of a list_t
  * @h: parameter
  * Return: returns the number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}

	return (i);
}
