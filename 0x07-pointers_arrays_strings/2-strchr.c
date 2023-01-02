#include <string.h>
#include "main.h"

/**
 * _strchr - locates character in the string
 * @s: string
 * @c: character
 * Return: pointer occurance of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}

}
