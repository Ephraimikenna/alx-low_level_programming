#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers,
 * followed by a new line.
 * @separator: This is input separator
 * @n: This is the input number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list inn;

	va_start(inn, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(inn, int));
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(inn);
}
