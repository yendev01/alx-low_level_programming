#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * string_toupper - function that changes all lowercase
  * letters of a string to uppercase
  * @s: input to function
  * Return: returns an array of character
  */

char *string_toupper(char *s)
{
	int n = strlen(s), i = 0;


	while (i < n)
	{

		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}

		i++;
	}
	s[i] = '\0';

	return (s);
}
