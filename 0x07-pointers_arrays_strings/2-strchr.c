#include "main.h"

/**
 * _strchr - locates character in the string
 * @s: string
 * @c: character
 * Return: pointer occurance of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*declaring WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
	++s;
	}
}
