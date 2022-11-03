/**
  * factorial - function that returns the factorial of a number
  * @n: the given number
  * Return: returns the factorial of n above
  */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
