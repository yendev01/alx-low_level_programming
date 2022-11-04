#include "main.h"

/**
  * _sqrt_recursion - function that returns the natural sqrt of a num
  * @n: input number
  * Return: returns sqrt of a natural number
  */

int _sqrt_recursion(int n)
{
	int m = n / 2;

	if (n == 1)
	{
		return (1);
	}

	if (n < 1)
	{
		return (-1);
	}

	return (sqrt_natural(n, m));
}

/**
  * sqrt_natural - evaluates the squares
  * @x: main input
  * @y: minor input
  * Return: returns value after evaluation
  */

int sqrt_natural(int x, int y)
{
	if (y * y > x)
	{
		return (sqrt_natural(x, y - 1));
	}

	else if (y * y == x)
	{
		return (y);
	}

	else
	{
		return (-1);
	}
}
