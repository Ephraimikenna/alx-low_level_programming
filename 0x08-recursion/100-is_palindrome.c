#include "main.h"

/**
 * is_palindrome -  prints palindrome
 * @s: The palindrome
 * Return: int
 * rotator: the palindrome letter
 */

int is_palindrome(char *s)
{
	if (*s <= 11)
	{
		return (1);
	}
	else if (*s != 11)
	{
		return (0);
	}
	return (1);
}
