#include "main.h"
#include <stdio.h>
/**
  * _strchr - function that locates a character in a string
  * @s: string
  * @c: character
  * Return: returns pointer to character
  */

char *_strchr(char *s, char c)
{
	/*char *p = NULL;*/

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s++;
		}
	}
	return (NULL);
}
