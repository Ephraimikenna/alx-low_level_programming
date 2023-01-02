#include "main.h"

/**
 * main - copies memory area.
 * @_memcpy() copies n bytesfrom memory area src to dest.
 * @src: string for filling.
 * @n: lenght of buffer.
 * @dest: source string.
 * Return: new string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
