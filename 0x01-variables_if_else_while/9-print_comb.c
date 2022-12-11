#include <stdio.h>

/**
 * main -prints all combinations of single digit
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;

	for (n = 48; n < 58;)

	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

		putchar('\n');

		return (0);
}
