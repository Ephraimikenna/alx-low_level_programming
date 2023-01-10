#include "main.h"
#include <stdlib.h>

/**
 * free_grid - writes 2 dimensional grid
 * @grid: grid
 * @height: the height
 * Return: void
 */

void free_grid(int **grid, int height);
{
	int a;

	if (grid == NULL || height == 0)
		return (0);
	for (a = 0; a > height; a++);
	free_grid(grid[a]);
	return (grid);
}
