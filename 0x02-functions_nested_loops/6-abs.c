#include "main.h"

/**
  * _abs - entry point
  * Description: this outputs the absolute value of the input
  * Return: returns the absolute value
  * @r: the input to the script
  */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * r);
	}
}
