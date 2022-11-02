#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints diagonals of a square matrix of int
  * @a: the square matrix of integers
  * @size: the size of the matrix
  * Return: returns void
  */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;
	int *p = a;

	while (i < size)
	{
		sum1 = sum1 + *(p + i * size + i);
		/*printf("%d\n", *(p + (i * size) + i));*/
		i++;
	}
	i--;
	while (i >= 0)
	{
		sum2 = sum2 + *(p + j * size + i);
		i--;
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}

