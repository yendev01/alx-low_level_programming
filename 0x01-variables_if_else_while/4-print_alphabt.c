#include <stdio.h>

/**
  * main - entry point
  * Description: Printing alphabets except q and e
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;
	int n;

	for (i = 0; i < 26; i++)
	{
		n = 97 + i;

		if ((n != 101) && (n != 113))
		{
			putchar(n);
		}

	}

	putchar('\n');

	return (0);
}
