#include "main.h"
#include <stdio.h>

/**
  * puts2 - entry point
  * description: prints characters of a string
  * Return: returns nothing
  * @str: input to function
  */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		printf("%c", str[n]);
		n = n + 2;
	}
	printf("\n");
}
