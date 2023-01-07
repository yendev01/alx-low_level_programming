#include "main.h"
/**
  * flip_bits - fxn that returns the number of bit you would need to flip ...
  * @n: ...
  * @m: ...
  * Return: number of bits to be flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nm;
	int len = sizeof(n) * 8, count = 0;

	nm = n ^ m;
	for (; len > 0; len--)
	{
		if (nm & 1)
			count++;
		nm = nm >> 1;
	}
	return (count);
}
