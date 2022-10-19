#include "main.h"

/**
  * print_last_digit - entry point
  * description: printing the last digit
  * Return: returns the last digit of an input
  * @r: input to the script
  */

int print_last_digit(int r)
{
	if (r >= 0)
	{
		_putchar((r % 10) + 48);
		return (r % 10);
	}
	else
	{
		int i;

		i = (-1 * r) % 10;
		_putchar(i + 48);
		return (i);
	}
}
