#include "main.h"
#include <string.h>

/**
  * cap_string - function that capitalizes all words of a string
  *
  * @s: input to function
  * Return: characters
  */

char *cap_string(char *s)
{
	int n = strlen(s), i = 0;

	while (i < n)
	{
		if ((i == 0) && (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - 32;
			i++;
		}

		else if (s[i] == (',') || s[i] == (';') || s[i] == (' ') ||
				s[i] == ('\t') || s[i] == ('\n') || s[i] ==
				('.') || s[i] == ('!') || s[i] == ('?') || s[i] ==
				('"') || s[i] == (')') || s[i] == ('(') || s[i] ==
				('{') || s[i] == ('}'))
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;

				i++;
			}
			else
			{
				i++;
			}
		}

		else
		{
			i++;
		}
	}
	s[i] = '\0';

	return (s);
}
