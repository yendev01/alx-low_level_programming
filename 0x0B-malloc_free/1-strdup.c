#include <string.h>
#include <stdlib.h>

/**
  * _strdup - fxn returns a ptr to a newly allocated space in memory
  * which contains a copy of the string given as a parameter
  * @str: string parameter
  * Return: returns a pointer to a char
  */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int length, i;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	ptr = (char *)malloc(length * sizeof(char));

	for (i = 0; i < length; i++)
	{
		*(ptr + i) = *str;
		str++;
	}
	*(ptr + i) = '\0';

	return (ptr);
}
