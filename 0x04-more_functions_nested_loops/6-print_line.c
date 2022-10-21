#include "main.h"

/**
  * print_line - entry point
  * description: function that draws a straight line in the terminal
  * Return: returns nothing
  * @n: input to function
  */

void print_line(int n)
{
	int i = 1;

	while (i < n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
