#include "main.h"

/**
  * is_prime_number - function returns 1 if prime, and 0 if not.
  * @n: the input number
  * Return: returns 1 or 0
  */

int is_prime_number(int n)
{
	int b = n / 2;

	if (n <= 1)
	{
		return (0);
	}

	return (prime_checker(n, b));
}

/**
  * prime_checker - checks for prime numbers
  * @a: first input
  * @b: second input
  * Return: 1 or 0
  */

int prime_checker(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else if (a % b != 0 && b > 1)
	{
		return (prime_checker(a, b - 1));
	}
	else
	{
		return (0);
	}
}
