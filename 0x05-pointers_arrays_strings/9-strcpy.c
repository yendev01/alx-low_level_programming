#include "main.h"
#include <stdio.h>

/**
  * _strcpy - function that copies the string
  *
  * @dest: buffer array
  * @src: input to buffer
  * Return: returns char
  */

char *_strcpy(char *dest, char *src)
{
	/**
	*while (*src != '\0')
	*{
	*	*dest = *src;
	*	dest++;
	*	src++;
	*}

	*dest = '\0';

	*/

	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	/*printf("%p\n %p\n %p\n", dest, &dest[i], &dest[0]);*/

	return (dest);
}
