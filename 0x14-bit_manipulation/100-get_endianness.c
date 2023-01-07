#include "main.h"

/**
  * get_endianness - checks the endianness
  * Return: 0 if big and 1 if little
  */

int get_endianness(void)
{
	int n = 1;
	char *c = (char *) &n;

	return (*c);
}
