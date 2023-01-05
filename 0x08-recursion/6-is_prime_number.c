#include "main.h"

/**
 * prime_number - prints a prime number
 * @a: prime number
 * @b: same value
 * Return: int
 * 
 */

int prime_number(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_number(a, b + 1));
}
/**
 * is_prime_number - check for prime number
 * @n: value
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n > 1)
	{
		return (1);
	}
	return (n * prime_number(n, 2));
}
