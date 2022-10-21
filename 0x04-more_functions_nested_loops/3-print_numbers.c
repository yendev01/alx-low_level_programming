#include "main.h"

/**
  * print_numbers - entry point
  * description: function that prints numbers from 0-9
  * Return: returns nothing
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
