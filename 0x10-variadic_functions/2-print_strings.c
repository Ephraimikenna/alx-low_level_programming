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
	int v;
	va_list open;

	va_start(open, n);
	for (v = 0; v < n; v++)
	{
		char *c;
		c = va_arg(open, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator != NULL && (v + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(open);
}
