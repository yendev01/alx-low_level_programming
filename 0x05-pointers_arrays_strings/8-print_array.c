#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an array of integers followed by /n
  *
  * @a: array to be printed
  * @n: number of elements of the array
  * Return: returns nothing
  */

void print_array(int *a, int n)
{
	int i = 0;

	if (n < 1)
	{
		printf("\n");
	}

	else
	{
		for (; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
}
