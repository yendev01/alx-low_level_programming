#include "main.h"

/**
  * print_alphabet - entry point
  * description: prints alphabets
  * Return: void
  */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
