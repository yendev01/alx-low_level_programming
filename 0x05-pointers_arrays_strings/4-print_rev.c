#include "main.h"

/**
  * print_rev - entry point
  * description: function that prints a string in a reverse
  * @s: input to function
  * Return: nothing
  */

void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);

		len--;
	}

	_putchar('\n');
}

/**
  * _strlen - entry point
  * description: function that calculates the length of a string
  * Return: returns length of a string
  * @s: input(string)
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
