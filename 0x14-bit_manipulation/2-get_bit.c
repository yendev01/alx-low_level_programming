#include "main.h"

/**
  * get_bit - function that returns the value of a bit at an index
  * @n: ...
  * @index: ...
  * Return: value of a bit at a given index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (1 & (n >> index))
		return (1);

	else
		return (0);

}
