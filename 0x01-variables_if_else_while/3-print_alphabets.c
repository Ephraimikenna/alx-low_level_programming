#include <stdio.h>

/**
 * main - print lowercase and then uppercase
 * Return: Always 0
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	for (ch <= 'z'; ch++;)
	{
		putchar(ch);
	}
	for (CH <= 'Z'; CH++;)
	{
		putchar(CH);
	}
	putchar('\n');

	return (0);
}
