#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
  * print_strings - ...
  * @separator: input
  * @n: input
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char * chr;
	va_list ap;
	
	va_start(ap, n);

	for (; i < n; i++)
	{
		chr = va_arg(ap, char *);

		if (chr == NULL)
			chr = "(nil)";
		printf("%s", chr);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
