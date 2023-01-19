#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: This is the input separator
 * @n: This is the number of items
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int v;
	va_list open;
	char *c;

	va_start(open, n);

	for (v = 0; v < n; v++)
	{

		c = va_arg(open, char *);

		if (c)
			printf("%s", c);
		else
			printf("(nil)");
		if (v < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(open);
}
