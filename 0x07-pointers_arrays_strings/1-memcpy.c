#include <string.h>
#include "main.h"

/**
 * _memcpy - fills memory with buffer.
 * @dest: source string
 * @src: string filling
 * @n: lenght of buffer
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
