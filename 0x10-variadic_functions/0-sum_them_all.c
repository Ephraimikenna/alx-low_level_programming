#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - summation of all parameters
 * @n: khuigfefuggfbu
 * Return: returns 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int c;
	va_list in;

	va_start(in, n);

	for (c = 0; c < n; c++)

		sum += va_arg(in, int);
	va_end(in);
	return (sum);
}
