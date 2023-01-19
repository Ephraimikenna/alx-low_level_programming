#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>

/**
 * print_all - Function that prints anything
 * @format: This is the format to print a value
 */

void print_all(const char * const format, ...)
{
	va_list v;
	char *s;
	unsigned int i = 0, j, c = 0;
	const char t_arg[] = "cifs";

	va_start(v, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(",");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(v, int)), c = 1;
			break;
			case'i':
			printf("%d", va_arg(v, int)), c = 1;
			case 'f':
			printf("%f", va_arg(v, double)), c = 1;
			case 's':
			s = va_arg(v, char *), c = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(v);
}
