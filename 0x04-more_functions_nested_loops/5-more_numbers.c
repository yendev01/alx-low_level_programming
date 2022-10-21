#include "main.h"

/**
  * more_numbers - entry point
  * description: print 10 times the numbers
  * Return: returns nothing
  */

void more_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
		}

		_putchar('\n');
		n++;
	}
}
