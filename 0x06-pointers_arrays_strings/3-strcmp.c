#include "main.h"

/**
  * _strcmp - function that compares two strings
  * @s1: input string to the function
  * @s2: second input string to the function
  * Return: returns int
  */

int _strcmp(char *s1, char *s2)
{
	int m = 0, n = 0;

	for (; s2[n] != '\0'; n++)
	{}
	for (; s1[m] != '\0'; m++)
	{}
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
