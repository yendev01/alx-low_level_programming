#include "main.h"

/**
  * _islower - entry point
  * Description: checks if a character is lower or upper case
  * Return: 1 if a lowercase and 0 if otherwise
  * @c: alphabet input to check the case
  */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	return (0);
}
