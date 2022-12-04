#include <string.h>
#include <stdlib.h>
#include <stdio.h>
unsigned int _pow(unsigned int x, unsigned int y);
/**
  * binary_to_uint - function that converts a binary number to an unsigned int
  * @b: ...
  * Return: returns an unsigned int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, sum = 0, i = strlen(b);

	if (!b)
		return (0);

	for (n = 1; n <= i; n++)
	{
		if ((int)*(b + i - n) != 48 && (int)(b[i - n]) != 49)
			return (0);

		if ((int)(b[i - n]) == 49)
			sum += _pow(2, n - 1);
	}

	return (sum);
}

/**
  * _pow - this is a description
  * @x: ..
  * @y: .
  * Return: ...
  */

unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int p = 1;

	for (; y > 0; y--)
		p = p * x;
	return (p);
}
