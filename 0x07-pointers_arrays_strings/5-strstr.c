#include "main.h"
#include "stdio.h"
#include "string.h"

int __strchr(char *s, char c);

/**
  * _strstr - function that locates a substring
  * @haystack: main string
  * @needle: substring
  * Return: returns pointer to match
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, p = __strchr(haystack, needle[0]);

	if (p == -1)
	{
		return (NULL);
	}
	while (needle[i] != '\0')
	{
		if (needle[i] != haystack[p + i])
		{
			return (NULL);
		}

		i++;
	}

	return (strchr(haystack, needle[0]));

}

/**
  * __strchr - function that locates a character in a string
  * @s: string
  * @c: character
  * Return: returns pointer to character
  */

int __strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
