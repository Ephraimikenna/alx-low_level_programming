#include "main.h"

/**
 * _strncat - concatenates strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used
 * Return: pointer of the dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
