#include "main.h"
#include <stdlib.h>
/**
  * rev_string - entry point
  * description: function that reverses a string
  * Return: returns nothing
  * @s: input to function
  */


int _strlen(char *s);

void rev_string(char *str)
{
	int i, n = 0;
/*	char v[500];*/
	char *v;

	v = calloc(_strlen(str), sizeof(char));

	while (str[n] != '\0')
	{
		*(v + n) = str[n];
		n++;
	}
	*(v + n) = '\0';

	i = n - 1;

	while (i >= 0)
	{
		*str = *(v + i);
		str++;
		i--;
	}
}

/**
  * _strlen - entry point
  * description: function that calculates the length of a string
  * Return: returns length of a string
  * @s: input(string)
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
