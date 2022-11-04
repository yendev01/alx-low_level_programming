#include "main.h"
#include <string.h>
/**
  * is_palindrome - check if a string is a palindrome
  * @s: string
  * Return: 1 if a palindrome and 0 if otherwise.
  */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}

	return (check_palindrome(s, s + len - 1));

}

/**
  * check_palindrome - checks for palindrome
  * @a: pointer to first position
  * @b: pointer to the last char
  * Return: returns 1 or 0 depending on if it's palindrome or not
  */

int check_palindrome(char *a, char *b)
{
	if (*a == '\0')
	{
		return (1);
	}
	if (*a == *b)
	{
		return (check_palindrome(a + 1, b - 1));
	}

	return (0);
}
