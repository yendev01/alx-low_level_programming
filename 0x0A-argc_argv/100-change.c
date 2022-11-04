#include <stdio.h>
#include <stdlib.h>

int coin(int m, int sum);
/**
  * main - entry point
  * @argc: count
  * @argv: 1-d array vector of strings
  * Return: returns 1 or 0
  */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int m = atoi(argv[1]);

		if (m <= 0)
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", coin(m, 0));
		return (0);
	}

	printf("Error\n");
	return (1);
}
/**
  * coin - evaluates
  * @m: input
  * @sum: sum
  * Return: returns the minimum coins
  */

int coin(int m, int sum)
{
	if (m >= 25)
	{
		if (m % 25 == 0)
		{
			return (m / 25);
		}
		else
		{
			return (coin(m % 25, m / 25));
		}
	}
	if (m >= 10)
	{
		if (m % 10 == 0)
		{
			return (sum + m / 10);
		}
		else
		{
			return (coin(m % 10, sum + m / 10));
		}
	}
	if (m >= 5)
	{
		if (m % 5 == 0)
		{
			return (sum + m / 5);
		}
		else
		{
			return (coin(m % 5, sum + m / 5));
		}
	}
	if (m >= 2)
	{
		if (m % 2 == 0)
		{
			return (sum + m / 2);
		}
		else
		{
			return (coin(m % 2, sum +  m / 2));
		}
	}
	return (sum + 1);
}
