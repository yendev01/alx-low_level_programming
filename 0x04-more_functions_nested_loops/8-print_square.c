#include "main.h"

/**
  * print_square - entry point
  * description: function that prints a square
  * Return: returns nothing as it is void
  * @size: size of the square
  */

void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int n = 0;

		while (n < size)
		{
			_putchar('#');
			n++;
		}

		_putchar('\n');

		i++;
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
