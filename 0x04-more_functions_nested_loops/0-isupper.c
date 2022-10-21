#include "main.h"

/**
  * _isupper - entry point
  * description: a function that checks for uppercase
  * Return: returns 1 if uppercase and 0 if otherwise
  * @c: character to the function
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
