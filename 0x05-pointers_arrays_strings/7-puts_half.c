#include "main.h"
#include <string.h>
#include <stdio.h>

/**
  * puts_half - prints half of the array
  *
  * Return: returns nothing
  * @str: input to function
  */

void puts_half(char *str)
{
	int n = strlen(str);
	int odd_n;
	int even_n; 
	char *st;

	if (n % 2 == 0)
	{
		even_n = n / 2;

		while (str[even_n] != '\0')
		{
			printf("%c", str[even_n]);
			even_n++;
		}
	}

	else
	{
		odd_n = (n - 1) / 2;

		st = &str[odd_n];

		while (*st != '\0')
		{
			printf("%c", *st);
			st++;
		}
	}
	printf("\n");
}
