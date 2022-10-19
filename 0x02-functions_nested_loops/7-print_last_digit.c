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
		return (r % 10);
	}
	else
	{
		return ((-1 * r) % 10);
	}
}
