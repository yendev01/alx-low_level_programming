#include "main.h"
#include <string.h>
#include <stdio.h>
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

	return (check_palindrome(s, len - 1, len));

}

/**
  * check_palindrome - checks for palindrome
  * @a: pointer to first position
  * @b: position of the last char
  * @m: length of string
  * Return: returns 1 or 0 depending on if it's palindrome or not
  */

int check_palindrome(char *a, int b, int m)
{
	if (b <= m / 2)
	{
		return (0);
	}

	if (*a == *(a + b))
	{
		return (check_palindrome(a + 1, b - 1, m));
	}

	return (1);
}
