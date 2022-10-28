#include "main.h"
#include <stdio.h>

/**
  * _strncpy - function that copies the string
  *
  * @dest: buffer array
  * @src: input to buffer
  * @n: input
  * Return: returns char
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
