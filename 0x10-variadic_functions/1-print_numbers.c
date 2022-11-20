#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - function that prints numbers followed by new line
  * @separator: input
  * @n: input
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (n == 0)
		return;
	va_start(ap, n);

	for (; i < (n - 1); i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator)
			printf("%c", *separator);
		printf(" ");
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
