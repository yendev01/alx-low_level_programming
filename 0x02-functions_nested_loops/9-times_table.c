#include "main.h"

/**
  * times_table - entry point
  * description: 9x9 table
  * Return: returns void
  */

void times_table(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			int p = i * j;

			if (j == 0)
			{
				_putchar(p + 48);
				_putchar(',');
				_putchar(' ');
			}

			else if (j == 9)
			{
				if (p < 10)
				{
					_putchar(' ');
					_putchar(p + 48);
				}
				else
				{
					_putchar(p / 10 + 48);
					_putchar(p % 10 + 48);
				}
			}

			else
			{
				if (p >= 10)
				{
					_putchar(p / 10 + 48);
					_putchar(p % 10 + 48);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(p + 48);
					_putchar(',');
					_putchar(' ');
				}
			}

			j++;
		}

		_putchar('\n');

		i++;
	}
}
