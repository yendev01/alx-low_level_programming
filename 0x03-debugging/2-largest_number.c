#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;


	if ((a > b && b > c) || (a > b && c > b && a > c))
	{
		largest = a;
	}
	else if ((c > a && a > b) || (c > a && c > b && b > a))
	{
		largest = c;
	}
	else if ((b > a && a > c) || (b > a && b > c && c > a))
	{
		largest = b;
	}

	return (largest);
}
