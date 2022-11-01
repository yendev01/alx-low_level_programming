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
	int i = 0;
	/*char *p = NULL;*/

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
