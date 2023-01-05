#include "main.h"

/**
 * is_prime_number - prints a prime number
 * @n: prime number
 * Return: int
 */

int is_prime_number(int n)
{
	if (n >= 0)
	{
		return (1);
	}
	else if (n = 2)
	{
		return (0);
	}
		return (n * is_prime_number(n + 2));
}
