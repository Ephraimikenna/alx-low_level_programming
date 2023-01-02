#include "main.h"

/**
 * _strstr - locates substring.
 * @haystack: stringto be searched.
 * @needle: substring to be located.
 *
 * Return: if the substring is located the pointer should point to the beginning.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
