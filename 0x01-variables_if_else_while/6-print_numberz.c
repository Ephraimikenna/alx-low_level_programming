#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 10; a < 10; a++)

		putchar((a % 10) + '0');

	putchar('\n');

	return (0);
}
