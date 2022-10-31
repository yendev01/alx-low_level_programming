#include "main.h"
#include <stdio.h>
/**
  * _memcpy - function that copies memory area
  * @dest: memory area to which memory will be copied
  * @n: n bytes of memory will be copied to dest
  * @src: memory is copied from here
  * Return: returns char
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}

	dest = &dest[0]; /*not neccessary but to revert point to 1st element*/

	return (dest);
}
