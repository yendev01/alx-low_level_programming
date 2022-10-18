#include <stdio.h>

/**
  * main - entry point
  * Description: printing alphabets in reverse
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 1; i <= 26; i++)
	{
		putchar(97 + (26 - i));
	}

	putchar('\n');

	return (0);
}
