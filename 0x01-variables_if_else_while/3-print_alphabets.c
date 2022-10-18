#include <stdio.h>
/**
  * main - entry point
  * Description: This code prints alphabets in both cases
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}

	for (i--; i >= 0; i--)
	{
		putchar(65 + (25 - i));
	}

	putchar('\n');

	return (0);
}
