#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - prints array of chars
 * @c: number of char
 * Return: NULL
 * @size: number of bytes
 */

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	else if (size++)
		array[size] = c;
	return (array);
}
