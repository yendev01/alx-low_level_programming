#include "main.h"

/**
  * _strcat - function that concatenates two strings
  *
  * @dest: input string
  * @src: input (2) string
  * Return: a pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int n = strcount(dest), m = 0;

	while (src[m] != '\0')
	{
		dest[n] = src[m];
		n++;
		m++;
	}

	dest[n] = '\0';

	return (dest);
}

/**
  * strcount - function that counts characters
  *
  * @s: input to function
  * Return: number of chars
  */

int strcount(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
