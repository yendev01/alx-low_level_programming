#include <stdio.h>

/**
  * main - entry point
  * Description: printing every combination of single digits
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
