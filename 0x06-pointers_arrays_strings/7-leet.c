#include "main.h"
#include <string.h>

/**
  * leet - function that encodes a string into 1337
  *
  * @s: input to be encoded
  * Return: returns encoded characters
  */

char *leet(char *s)
{
	int i = 0, m = strlen(s);
	char a[] = "aeotl", aA[] = "AEOTL", leet_code[] = "43071";


	while (i < m)
	{
		int n = 0;

		while (n < 5)
		{
			if (s[i] == a[n] || s[i] == aA[n])
			{
				s[i] = leet_code[n];
			}
			n++;
		}
		i++;
	}

	s[i] = '\0';
	return (s);
}
