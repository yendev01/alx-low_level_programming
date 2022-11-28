#include <stdio.h>
#include "lists.h"
/**
  * list_len - ...
  * @h: pointer to struct
  * Return: number of element
  */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h; i++)
		h = h->next;

	return (i);
}
