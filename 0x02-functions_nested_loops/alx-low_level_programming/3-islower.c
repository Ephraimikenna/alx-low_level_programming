#include "main.h"

/**
 * _islower - check for character returns 1
 * otherwise returns 0 just like islowe() in ctype.h
 * @c: Is the int value to be compared with ASCII value
 * Return: 0 if successful. _islower - Entry point
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
