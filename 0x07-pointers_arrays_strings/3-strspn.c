#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  * _strspn - function that gets the length of a prefix substr
  * @s: initial segment
  * @accept: input
  * Return: returns unsigned int
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	if (s == NULL || accept == NULL)
	{
		return (0);
	}

	while (*s != '\0' && strchr(accept, *s))
	{
		i++, s++;
	}
	return (i);
}
