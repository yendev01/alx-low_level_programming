#include "main.h"

/**
  * _memset - function fills the first n bytes of memory...
  * @s: input
  * @b: byte
  * @n: number of memory area to be filled
  * Return: returns character
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}	return (s);
}
