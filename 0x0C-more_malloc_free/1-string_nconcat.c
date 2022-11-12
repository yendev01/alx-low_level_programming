#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
int int_strlen(char *str);
/**
  * string_nconcat - funtion that concatenates two strings
  * @s1: string to be concatenated
  * @s2: string to be catenated
  * @n: n bytes
  * Return: returns a point to a string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, m, n_int = n;
	char *array;

	if (s1 == NULL)
	{
		strcpy(s1, "");
	}
	if (s2 == NULL)
	{
		strcpy(s2, "");
	}
	if (n_int < 0)
	{
		return (NULL);
	}
	if (n_int >= int_strlen(s2))
	{
		n_int = int_strlen(s2);
	}
	i = sizeof(char) * (int_strlen(s1) + n_int + 1);
	array = malloc(i);
	if (array == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < int_strlen(s1); m++)
	{
		array[m] = *(s1 + m);
	}

	for (; m < (i - 1); m++)
	{
		array[m] = *s2;
		s2++;
	}
	array[m] = '\0';
	return (array);
}

/**
  * int_strlen - counts a string
  * @str: input string
  * Return: returns number of string
  */

int int_strlen(char *str)
{
	int m = strlen(str);

	return (m);
}
