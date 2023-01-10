#include "main.h"
#include <stdlib.h>

/**
 * create_array - prints array of chars
 * @c: number of char
 * size: number of bytes
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	else if (size--)
		array[size] = c;
	{
		return (array);
	}
}
