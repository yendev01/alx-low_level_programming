#include "main.h"

/**
  * _isalpha - entry point
  * Description: checks if a character is an alphabet
  * Return: returns 1 if true and o if otherwise
  * @c: input to be checked
  */

int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		return (1);
	}

	return (0);
}
