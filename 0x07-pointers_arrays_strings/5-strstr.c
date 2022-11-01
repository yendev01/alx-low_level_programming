#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * _strstr - function that locates a substring
  * @haystack: main string
  * @needle: substring
  * Return: returns pointer to match
  */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, strlen(needle)) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
