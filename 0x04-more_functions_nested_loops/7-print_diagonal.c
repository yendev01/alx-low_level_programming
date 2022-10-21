#include "main.h"

/**
  * print_diagonal - entry point
  * description: draws a diagonal line on the terminal
  * Return: returns nothing
  * @n: input to function
  */

void print_diagonal(int n)
{
	int m = 0;

	while (m < n)
	{
		int i = 0;

		while (i < m)
		{
			_putchar(' ');
			i++;
		}

		_putchar('\\');

		m++;

		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
