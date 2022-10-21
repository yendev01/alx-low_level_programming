#include "main.h"

/**
  * print_triangle - entry point
  * description: function that prints a triangle followed by a new line
  * Return: void
  * @size: size of triangle
  */

void print_triangle(int size)
{
	int i = 1;

	while (i <= size)
	{
		int n = 0;

		int m = 0;

		while ((size - n) > i)
		{
			_putchar(' ');

			n++;

		}

		while (m < (size - n))
		{
			_putchar('#');

			m++;
		}

		i++;
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
