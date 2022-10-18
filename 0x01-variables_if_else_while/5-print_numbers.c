#include <stdio.h>

/**
  * main - entry point
  * Description: printing the single digits followed by \n
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}

	putchar('\n');

	return (0);
}
