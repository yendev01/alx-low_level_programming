#include "main.h"

/**
  * _strncat - function that concatenates two strings
  *
  * @dest: input string to the function
  * @src: second string input to the function
  * @n: the number of bytes from src
  * Return: returns concatenated strings
  */

char *_strncat(char *dest, char *src, int n)
{
	int m = strcount(dest), i = 0;

	while ((i < n) && src[i] != '\0')
	{
		dest[i + m] = src[i];
		i++;
	}
	dest[i + m] = '\0';
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
