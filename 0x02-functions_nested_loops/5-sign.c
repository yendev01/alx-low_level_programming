#include "main.h"

/**
  * print_sign - entry point
  * description: prints out sign
  * Return: returns 1 if +, 0 if 0, and -1 if -
  * @n: input to the function
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
