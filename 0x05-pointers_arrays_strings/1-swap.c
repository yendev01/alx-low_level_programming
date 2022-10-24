#include "main.h"

/**
  * swap_int - entry point
  * description: function that swaps the values of two integers
  * Return: nothing
  * @a: first input
  * @b: second input
  */

void swap_int(int *a, int *b)
{
	int m, n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;
}
