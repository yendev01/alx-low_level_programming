#include <stdio.h>

/**
  * main - entry point
  * Description: printing every combination of single digits
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(48 + i);
		putchar(',');
		putchar(' ');
	}

	putchar(57);

	return (0);
}
