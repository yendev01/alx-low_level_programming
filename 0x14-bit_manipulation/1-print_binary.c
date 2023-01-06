#include <stdio.h>
/**
  * print_binary - ...
  * @n: number
  * Return: returns nothing
  */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int product = 1;
	
	for (i = 0; i < (int)n; i++)
	{
		product = product * 2;
		if (product > n)
		{
			break;
		}
	}

	for (; i >= 0; i--)
	{
		printf("%c", n & (1 << i) ? '1' : '0');
	}

}
