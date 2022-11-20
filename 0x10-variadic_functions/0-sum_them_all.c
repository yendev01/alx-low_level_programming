#include <stdarg.h>

/**
  * sum_them_all - ...
  * @n: input
  * Return: returns int
  */

int sum_them_all(const unsigned int m, ...)
{
	va_list var;
	int sum = 0;
	unsigned int i = 0;

	if (m == 0 || !m)
		return (0);

	va_start(var, m);

	for (; i < m; i++)
	{
		sum = sum + va_arg(var, int);
	}

	va_end(var);

	return (sum);
}
