#include "main.h"

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
