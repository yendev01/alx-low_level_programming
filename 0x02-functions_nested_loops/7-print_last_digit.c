#include "main.h"
#include <stdio.h>

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
		printf("%d", r % 10);
		return (r % 10);
	}
	else
	{
		int i;

		i = (-1 * r) % 10;
		printf("%d", i);
		return (i);
	}
}
