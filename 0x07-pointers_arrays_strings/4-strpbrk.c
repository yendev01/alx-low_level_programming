#include "main.h"
#include "stdio.h"
#include "string.h"

/**
  * _strpbrk - function that locates the first occurence of s
  * @s: the first occurence(input to function)
  * @accept: input in which the first occurence is searched
  * Return: returns char
  */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (strchr(accept, s[i]) != NULL)
		{
			return (s + i);
		}

		i++;
	}

	return (NULL);
}
