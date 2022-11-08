#include <string.h>
#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings
  * @s1: string input
  * @s2: string input (2)
  * Return: returns pointer
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, length = strlen(s1) + strlen(s2);

	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}

	ptr = (char *)malloc((length + 1) * sizeof(char));

	for (i = 0; *s1 != '\0'; i++)
	{
		*(ptr + i) = *s1;
		s1++;
	}
	*(ptr + i) = ' ';

	for (; i <= length; ++i)
	{
		*(ptr + i) = *s2;
		s2++;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
