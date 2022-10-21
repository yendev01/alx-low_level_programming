#include "main.h"

/**
  * _isdigit - main entry
  * description: function that checks for a digit
  * Return: returns 1 if input is a digit and 0 if otherwise
  * @c: input to function
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
