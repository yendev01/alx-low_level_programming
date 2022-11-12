#include <stdlib.h>
#include <string.h>
/**
  * string_nconcat - funtion that concatenates two strings
  * @s1: string to be concatenated
  * @s2: string to be catenated
  * @n: n bytes
  * Return: returns a point to a string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, m;
	char *array;

	if (s1 == NULL)
	{
		strcpy(s1, "");
	}
	if (s2 == NULL)
	{
		strcpy(s2, "");
	}

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	i = sizeof(char) * (strlen(s1) + n + 1);

	array = malloc(i);

	if (array == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < strlen(s1); m++)
	{
		array[m] = *(s1 + m);
	}

	for (; m < i; m++)
	{
		array[m] = *s2;
		s2++;
	}
	return (array);
}
