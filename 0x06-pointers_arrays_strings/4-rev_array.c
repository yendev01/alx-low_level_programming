#include "main.h"
#include <stdlib.h>
/**
  * reverse_array - function that reverses the content of an array of integers
  * @a: an array of integers
  * @n: the number of elements of the array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int *ptr, i = 0, m = 0;

	ptr = (int *) malloc(n * sizeof(int));


	while (i < n)
	{
		ptr[i] = a[n - i - 1];
		i++;
	}

	while (m < n)
	{
		/*a[m] = ptr[m];*/
		*a = *ptr;
		a++, ptr++;
		m++;
	}
}
