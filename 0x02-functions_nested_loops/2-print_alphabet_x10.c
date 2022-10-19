#include "main.h"

/**
  * print_alphabet_x10 - entry point
  * Description: prints all the alphabets 10 times
  * Return: void
  */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int i = 97;

		while (i < 123)
		{
			_putchar(i);
			i++;
		}

		_putchar('\n');

		n++;
	}
}
