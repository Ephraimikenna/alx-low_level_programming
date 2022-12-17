#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 58; c++)
	{
		if (c != 50 && c !=52)
			_putchar(c);
	}
	_putchar('\n');
}
