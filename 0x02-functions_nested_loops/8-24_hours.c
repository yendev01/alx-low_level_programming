#include "main.h"

/**
  * jack_bauer - entry point
  * description: printing digit combinations
  * Return: returns void
  */

void jack_bauer(void)
{
	int i = 0;

	while (i < 3)
	{
		int n = 0;
		int z = 10;

		if (i == 2)
		{
			z = 4;
		}

		while (n < z)
		{
			int v = 0;

			while (v < 6)
			{
				int m = 0;

				while (m < 10)
				{
					_putchar(48 + i);
					_putchar(48 + n);
					_putchar(':');
					_putchar(48 + v);
					_putchar(48 + m);
					_putchar('\n');
					m++;
				}

				v++;
			}
			n++;
		}
		i++;
	}
}
