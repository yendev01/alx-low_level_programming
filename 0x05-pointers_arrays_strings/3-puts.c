#include "main.h"
#include <stdio.h>

/**
  * _puts - entry point
  * description: function that prints a string followed by a new line
  * Return: returns nothing
  * @str: input to function
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
