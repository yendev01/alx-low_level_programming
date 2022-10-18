#include <stdio.h>
/**
  * main - entry point
  * Description: This prints the alphabets in lowercase
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	putchar('\n');

	return (0);
}
