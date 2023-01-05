#include "main.h"

/**
 * factorial - returns factorial
 * @n: lower than 0
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}
