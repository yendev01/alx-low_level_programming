#include "main.h"
#include <string.h>

/**
  * _strcmp - function that compares two strings
  * @s1: input string to the function
  * @s2: second input string to the function
  * Return: returns int
  */

int _strcmp(char *s1, char *s2)
{
	int m = strlen(s1), n = strlen(s2);

	if (m > n)
	{
		return (15);
	}

	else if (m < n)
	{
		return (-15);
	}

	else
	{
		return (0);
	}
}
