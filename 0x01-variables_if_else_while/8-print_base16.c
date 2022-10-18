#include <stdio.h>

/**
  * main - entry point
  * Description: script to print hexadecimal
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;
	int n = 48;

	for (i = 0; i < 16 ; i++)
	{
		putchar(n + i);

		if (i == 9)
		{
			n = n + 39;
		}
	}

	putchar('\n');

	return (0);
}
